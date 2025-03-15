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

#include "templateDerivedClassNameREPLACEME.H"
#include "addToRunTimeSelectionTable.H"
 

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

namespace Foam
{
    defineTypeNameAndDebug(templateDerivedClassNameREPLACEME, 0);
    addToRunTimeSelectionTable( templateClassNameREPLACEME, templateDerivedClassNameREPLACEME, paramList);

// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //
templateDerivedClassNameREPLACEME::templateDerivedClassNameREPLACEME
( // contents of paramList  
    const fvMesh& mesh
)
:
templateClassNameREPLACEME
    ( // untyped paramList 
    mesh
    )
{
}

} // namespace Foam


// ************************************************************************* // 
