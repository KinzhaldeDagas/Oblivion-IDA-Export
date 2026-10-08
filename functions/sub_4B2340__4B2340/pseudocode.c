int __thiscall sub_4B2340(int *this)
{
  int v2; // edi
  CHAR *FormModelPAth; // eax

  v2 = *this; /*0x4b2344*/
  FormModelPAth = GetFormModelPAth(this); /*0x4b2347*/
  return (*(int (__thiscall **)(int *, CHAR *))(v2 + 0x118))(this, FormModelPAth); /*0x4b235a*/
}
