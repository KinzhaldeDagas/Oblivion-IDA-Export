bool __thiscall sub_5F1330(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  char v4; // al
  int v6; // esi

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x78))(this) ) /*0x5f1338*/
    return 0; /*0x5f1338*/
  v2 = (_DWORD *)*(this + 0x16); /*0x5f133e*/
  v3 = v2[2]; /*0x5f1341*/
  if ( v3 ) /*0x5f1346*/
  {
    v4 = *(_BYTE *)(v3 + 0x20); /*0x5f1348*/
    if ( (v4 != 5 || !v2[1]) && (v4 != 6 || !v2[1]) ) /*0x5f1359*/
      return 0; /*0x5f135d*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 0x478))(v2) ) /*0x5f1367*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0x16) + 0x474))(*(this + 0x16), 0); /*0x5f137a*/
    return 0; /*0x5f137f*/
  }
  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 0x154))(this); /*0x5f138c*/
  return v6 /*0x5f13ba*/
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 0x98))(v6)
      && !sub_4A0300(v6, (float *)g_WorldSceneReceiverRoot->camera, flt_A524B0);
}
