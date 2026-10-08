// CustomAnimSupport evidence: queued idle loader resource resolution helper used before Meshes\<idle-model-path> KF load.
int __thiscall sub_449040(int *this, int a2, int a3)
{
  int *i; // ecx
  int result; // eax

  for ( i = this + 0x2D; i; i = (int *)i[1] ) /*0x449047*/
  {
    result = *i; /*0x449051*/
    if ( !*i ) /*0x449051*/
      break; /*0x449055*/
    if ( *(_DWORD *)(result + 0x30) == a2 ) /*0x44905a*/
    {
      if ( !a3 ) /*0x44905e*/
        return result; /*0x44905e*/
      --a3; /*0x449060*/
    }
  }
  return 0; /*0x44906c*/
}
