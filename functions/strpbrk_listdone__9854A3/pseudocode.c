int __usercall strpbrk_::listdone@<eax>(int a1@<ebp>)
{
  return strpbrk_::dstnext(*(char **)(a1 + 8));
}
