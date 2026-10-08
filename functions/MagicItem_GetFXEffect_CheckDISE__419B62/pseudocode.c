// positive sp value has been detected, the output may be wrong!
int __userpurge MagicItem_GetFXEffect_::CheckDISE@<eax>(_DWORD *a1@<esi>, int a2, int a3, int a4, int a5)
{
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x18))(a1) == 1 ) /*0x419b6e*/
    return MagicItem_GetFXEffect_::Return_DISE(a2); /*0x419b6f*/
  if ( a1[5] || a1[4] ) /*0x419b94*/
    return MagicItem_GetFXEffect_::FindStrongestEffect((int)(a1 + 3), a2, a3, a4, a5); /*0x419b92*/
  return 0; /*0x419b9f*/
}
