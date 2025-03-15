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
    templateDerivedClassNameREPLACEME.C

\*---------------------------------------------------------------------------*/

#ifndef templateDerivedClassNameREPLACEME_H
#define templateDerivedClassNameREPLACEME_H

#include "runTimeSelectionTables.H"
#include "volFields.H"
#include "dimensionedScalar.H"
#include "volFieldsFwd.H" 
#include "templateClassNameREPLACEME.H"
 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{
/*---------------------------------------------------------------------------*\
            Class templateDerivedClassNameREPLACEME Declaration
\*---------------------------------------------------------------------------*/


class templateDerivedClassNameREPLACEME : public templateClassNameREPLACEME
{
    protected:
    // - ...

public:
    // - Runtime type information
    TypeName("templateDerivedClassNameREPLACEME");


    // Constructors
        templateDerivedClassNameREPLACEME
        ( // contents of paramList  
            const fvMesh& mesh
        );

    // Selector
        static autoPtr<templateDerivedClassNameREPLACEME> New
        (  // contents of paramList  
            const fvMesh& mesh
        );


    //- Destructor
    virtual ~templateDerivedClassNameREPLACEME(){};


    // Member Functions

}; 

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //


} // End namespace Foam

#endif

// ************************************************************************* //
