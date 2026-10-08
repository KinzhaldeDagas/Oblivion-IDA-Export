int __usercall MagicCaster_InitializeCasting____::GetMagicItem@<eax>(char a1@<bl>, _DWORD *a2@<esi>)
{
  int result; // eax
  int v3; // edi
  int (__thiscall *v4)(_DWORD *, _DWORD); // edx
  int v5; // eax
  void *v6; // eax
  EffectSetting *FXEffect; // eax
  unsigned int v8; // ecx
  int v9; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*a2 + 0x30))(a2); /*0x699e18*/
  if ( result ) /*0x699e1c*/
  {
    v3 = *a2; /*0x699e22*/
    v4 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x30); /*0x699e24*/
    a2[2] = 7; /*0x699e2b*/
    v5 = v4(a2, 0); /*0x699e32*/
    (*(void (__thiscall **)(_DWORD *, int))(v3 + 0x18))(a2, v5); /*0x699e3a*/
    if ( a1 ) /*0x699e3e*/
    {
      v6 = (void *)(*(int (__thiscall **)(_DWORD *))(*a2 + 0x30))(a2); /*0x699e49*/
      FXEffect = MagicItem_GetFXEffect(v6, 0); /*0x699e4d*/
      if ( FXEffect ) /*0x699e54*/
      {
        LOWORD(v8) = FXEffect->model.nifModel.m_dataLen; /*0x699e56*/
        if ( (_WORD)v8 == 0xFFFF ) /*0x699e5f*/
          v8 = strlen(FXEffect->model.nifModel.m_data); /*0x699e64*/
        else
          v8 = (unsigned __int16)v8; /*0x699e74*/
        if ( v8 ) /*0x699e79*/
        {
          v9 = (int)FXEffect->model.vtbl->GetModelPath(&FXEffect->model); /*0x699e88*/
          QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v9, 0, 1); /*0x699e91*/
        }
      }
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x34))(a2, 0); /*0x699e9f*/
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x3C))(a2, 0); /*0x699eaa*/
  }
  return result; /*0x699eaf*/
}
