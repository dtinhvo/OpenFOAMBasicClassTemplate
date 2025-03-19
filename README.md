
Example bash scripting to automate creation of Base and Derived Class (names as user input):


```
replaceAll() # string replace and file rename util
{	
grep -rl "$1" ./ | xargs sed -i 's/'"$1"'/'"$2"'/g'
# Rename files
find . -depth -name "*$1*" | while IFS= read -r file; do
    new_name=$(echo "$file" | sed "s/$1/$2/g") 
    mv "$file" "$new_name"
done
 
} 

NewOFBaseClass()
{
read -p "Enter BaseClass name: " newBaseClassName
mkdir -p   $newBaseClassName ; cd  $newBaseClassName

curl -O https://raw.githubusercontent.com/dtinhvo/OpenFOAMBasicClassTemplate/master/templateClassNameREPLACEME.C
curl -O https://raw.githubusercontent.com/dtinhvo/OpenFOAMBasicClassTemplate/master/templateClassNameREPLACEME.H

replaceAll templateClassNameREPLACEME $newBaseClassName 

}

NewOFDerivedClass()
{
read -p "Enter DerivedClass name: " newDerivedClassName
read -p "Enter BaseClass name: " newBaseClassName
 
mkdir -p   $newDerivedClassName ; cd $newDerivedClassName 

curl -O https://raw.githubusercontent.com/dtinhvo/OpenFOAMBasicClassTemplate/master/templateDerivedClassNameREPLACEME.C
curl -O https://raw.githubusercontent.com/dtinhvo/OpenFOAMBasicClassTemplate/master/templateDerivedClassNameREPLACEME.H

replaceAll templateDerivedClassNameREPLACEME $newDerivedClassName 
replaceAll templateClassNameREPLACEME $newBaseClassName 
  
} 
```
 
