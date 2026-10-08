struct wine_rb_tree
{
wine_rb_compare_func_t compare __offset(OFF64|AUTO);
wine_rb_entry *root __offset(OFF64|AUTO);
};
