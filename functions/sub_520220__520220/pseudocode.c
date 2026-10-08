// TESIdleForm model path extension test: true only when the model path extension is exactly .kf.
char __thiscall sub_520220(_DWORD *this)
{
  const char *v1; // eax
  unsigned __int8 *v2; // eax
  bool v3; // zf
  char result; // al

  v1 = (const char *)(*(int (__thiscall **)(_DWORD *))(*(this + 6) + 0x14))(this + 6); /*0x52022e*/
  v2 = (unsigned __int8 *)strrchr(v1, 0x2E); /*0x520231*/
  if ( !v2 ) /*0x52023b*/
    return 0; /*0x52023b*/
  v3 = CRT_StricmpLocaleDispatch(v2, (unsigned __int8 *)a_kf) == 0; /*0x52024b*/
  result = 1; /*0x52024d*/
  if ( !v3 ) /*0x52024f*/
    return 0; /*0x520251*/
  return result; /*0x520253*/
}
