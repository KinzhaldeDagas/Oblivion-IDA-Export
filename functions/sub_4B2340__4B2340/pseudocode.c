int __thiscall sub_4B2340(int *this)
{
  int v2; // edi
  CHAR *FormModelPAth; // eax

  v2 = *this;
  FormModelPAth = GetFormModelPAth(this);
  return (*(int (__thiscall **)(int *, CHAR *))(v2 + 0x118))(this, FormModelPAth);
}
