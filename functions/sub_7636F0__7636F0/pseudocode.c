char __thiscall sub_7636F0(_BYTE *this, int a2)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  signed int v8; // eax
  void *v9; // ecx
  int v10; // eax
  signed int v11; // eax
  void *v12; // ecx

  if ( !a2 ) /*0x7636f9*/
    return 0; /*0x7636fe*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x20))(a2); /*0x763709*/
  if ( !v4 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x2C))(v4) ) /*0x763716*/
    return 0; /*0x763720*/
  v5 = *(_DWORD *)v4; /*0x76372a*/
  if ( *(this + 0x6E9) ) /*0x763723*/
    v6 = (*(int (__fastcall **)(int))(v5 + 0x14))(v4); /*0x763734*/
  else
    v6 = (*(int (__fastcall **)(int))(v5 + 0x28))(v4); /*0x763739*/
  v7 = v6; /*0x76373b*/
  if ( !v6 ) /*0x76373f*/
    return 0; /*0x76373f*/
  v8 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v6 + 0x50))(v6, 0); /*0x763749*/
  if ( v8 < 0 ) /*0x76374d*/
  {
    D3D9_HResultToString(v8); /*0x763750*/
    Shared_NoOpVirtual_60D0A0(v9); /*0x76375b*/
    return 0; /*0x763768*/
  }
  if ( !*(this + 0x6E9) ) /*0x76376b*/
  {
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x14))(v4); /*0x76377b*/
    if ( !v10 ) /*0x76377f*/
      return 0; /*0x7637ae*/
    v11 = (*(int (__stdcall **)(_DWORD, int, int))(**((_DWORD **)this + 0xA0) + 0x7C))( /*0x76378f*/
            *((_DWORD *)this + 0xA0),
            v7,
            v10);
    if ( v11 < 0 ) /*0x763793*/
    {
      D3D9_HResultToString(v11); /*0x763796*/
      Shared_NoOpVirtual_60D0A0(v12); /*0x7637a1*/
      return 0; /*0x7637a1*/
    }
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x30))(v4, 0); /*0x7637ba*/
  return 1; /*0x7636fd*/
}
