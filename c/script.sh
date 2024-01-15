read -p "File anme: " file_name
read -p "User name: " user
read -p "Problem lvl: " lvl

date=$(date +"%Y-%m-%d %H:%M:%S")

echo "// file name: $file_name" >> "$file_name"
echo "// user name: $user" >> "$file_name"
echo "// problem lvl: $lvl" >> "$file_name"
echo "// created at: $date" >> "$file_name"
