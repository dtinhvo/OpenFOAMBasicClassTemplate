/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) 2013-2021 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "templateClassNameREPLACEME.H"


// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

namespace Foam
{
    defineTypeNameAndDebug(templateClassNameREPLACEME, 0);
    defineRunTimeSelectionTable(templateClassNameREPLACEME, paramList);
}

// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //
namespace Foam
{
templateClassNameREPLACEME::templateClassNameREPLACEME
( // contents of paramList  
    const fvMesh& mesh
)
:
    mesh(mesh)
{
}


// * * * * * * * * * * * * * * * * * Selectors * * * * * * * * * * * * * * * //

autoPtr<templateClassNameREPLACEME>
templateClassNameREPLACEME::New
( // contents of paramList  
    const fvMesh& mesh
)
{
    const word templateClassNameREPLACEMEType (word(
        /*class selector location*/mesh.lookupObject<IOdictionary>("TBDREPLACEME").lookup("templateClassNameREPLACEME"))); 
    Info<< "Selecting derived Class of baseClassNameREPLACEME: " << templateClassNameREPLACEMEType << endl;   
    auto constructorIter = 
        paramListConstructorTablePtr_->find(templateClassNameREPLACEMEType);                     
    if (constructorIter == paramListConstructorTablePtr_->end())
    {
        FatalErrorIn
        (
            "templateClassNameREPLACEME::New" 
        ) 
            << "unknown baseType model " << templateClassNameREPLACEMEType << endl << endl
            << "Valid schemes are :" << endl
           << paramListConstructorTablePtr_->sortedToc()
            << exit(FatalError);
    }                                                                
    return autoPtr<templateClassNameREPLACEME> ( 
        constructorIter()
        ( // untyped paramList  
            mesh
        ) 
    );
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

templateClassNameREPLACEME::~templateClassNameREPLACEME()
{}

} // namespace Foam


// ************************************************************************* //
