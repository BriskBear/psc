[[ -f $OUT ]] && rm $OUT
gcc $IN "${FLAGS[@]}" $OUT
