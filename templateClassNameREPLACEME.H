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

Class

Description

SourceFiles
    templateClassNameREPLACEME.C

\*---------------------------------------------------------------------------*/

#ifndef templateClassNameREPLACEME_H
#define templateClassNameREPLACEME_H

#include "runTimeSelectionTables.H"
#include "volFields.H"
#include "dimensionedScalar.H"
#include "volFieldsFwd.H" 

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{
/*---------------------------------------------------------------------------*\
            Class templateClassNameREPLACEME Declaration
\*---------------------------------------------------------------------------*/


class templateClassNameREPLACEME
{
    protected:
        //- mesh
        const fvMesh& mesh;

public:
    // - Runtime type information
    TypeName("templateClassNameREPLACEME");

    //- Disallow copy construct
    templateClassNameREPLACEME (const templateClassNameREPLACEME&);
    //- Disallow default bitwise assignment
    void operator=(const templateClassNameREPLACEME&);   

    // Declare runtime construction
    declareRunTimeSelectionTable
    (
        autoPtr,
        templateClassNameREPLACEME,
        paramList,
        ( // contents of paramList 
            const fvMesh& mesh
        ),
        ( // untyped paramList 
        mesh
        )
    );

    // Constructors

        //- Construct
        templateClassNameREPLACEME
        ( // contents of paramList  
            const fvMesh& mesh
        );

    // Selectors
        static autoPtr<templateClassNameREPLACEME> New
        (  // contents of paramList  
            const fvMesh& mesh
        );


    //- Destructor
    virtual ~templateClassNameREPLACEME(){};


    // Member Functions

}; 

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //


} // End namespace Foam

#endif

// ************************************************************************* //
