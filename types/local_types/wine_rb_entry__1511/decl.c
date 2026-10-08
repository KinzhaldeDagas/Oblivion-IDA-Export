struct __declspec(align(8)) wine_rb_entry
{
wine_rb_entry *parent;
wine_rb_entry *left;
wine_rb_entry *right;
unsigned int flags;
};
