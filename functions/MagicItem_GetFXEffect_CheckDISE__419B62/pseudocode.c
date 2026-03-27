// positive sp value has been detected, the output may be wrong!
int __userpurge MagicItem_GetFXEffect_::CheckDISE@<eax>(_DWORD *a1@<esi>, int a2, int a3, int a4, int a5)
{
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x18))(a1) == 1 )
    return MagicItem_GetFXEffect_::Return_DISE(a2);
  if ( a1[5] || a1[4] )
    return MagicItem_GetFXEffect_::FindStrongestEffect((int)(a1 + 3), a2, a3, a4, a5);
  return 0;
}
