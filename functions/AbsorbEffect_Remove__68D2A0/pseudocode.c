int __usercall AbsorbEffect_Remove@<eax>(float *a1@<ecx>, int a2@<ebx>)
{
  MagicCaster *v3; // ecx
  TESObjectREFR *ParentActor; // edi
  int result; // eax
  int v6; // ecx
  LONG (__stdcall *v7)(volatile LONG *); // ebx
  int v8; // edi
  int v10; // [esp+8h] [ebp-10h]
  int v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+Ch] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-Ch]
  int v14; // [esp+Ch] [ebp-Ch]
  float v15; // [esp+10h] [ebp-8h] BYREF
  int v16; // [esp+14h] [ebp-4h]

  ValueModifierEffect_Remove(a1, v12, v15); /*0x68d2a5*/
  if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 3) + 0x1C) + 0x58) & 2) != 0 ) /*0x68d2b8*/
  {
    v3 = *((MagicCaster **)a1 + 9); /*0x68d2ba*/
    if ( v3 ) /*0x68d2bf*/
      ParentActor = (TESObjectREFR *)MagicCaster_GetParentActor(v3); /*0x68d2c6*/
    else
      ParentActor = 0; /*0x68d2ca*/
    v16 = *((int *)a1 + 6); /*0x68d2d0*/
    ValueModifierEffect_GetEffectiveMagnitude(v16, v13, v15); /*0x68d2dd*/
    ValueModifierEffect_ModifyAV((int)a1, ParentActor, v16, v11, v14, v16); /*0x68d2f1*/
  }
  sub_7F4420(*((_DWORD *)a1 + 0xF), *((NiProperty **)a1 + 0x12)); /*0x68d2fe*/
  result = *((_DWORD *)a1 + 0xF); /*0x68d303*/
  if ( result ) /*0x68d30b*/
  {
    v6 = *(_DWORD *)(result + 0x1C); /*0x68d30d*/
    v7 = InterlockedDecrement; /*0x68d313*/
    if ( v6 ) /*0x68d319*/
    {
      (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)v6 + 0x88))(v6, &v15, result, a2); /*0x68d329*/
      result = v10; /*0x68d32b*/
      if ( v10 ) /*0x68d331*/
      {
        result = v7((volatile LONG *)(v10 + 4)); /*0x68d339*/
        if ( !result ) /*0x68d33d*/
          result = (**(int (__thiscall ***)(int, int))v10)(v10, 1); /*0x68d34b*/
      }
    }
    v8 = *((_DWORD *)a1 + 0xF); /*0x68d34d*/
    if ( v8 ) /*0x68d352*/
    {
      result = v7((volatile LONG *)(v8 + 4)); /*0x68d358*/
      if ( !result ) /*0x68d35c*/
        result = (**(int (__thiscall ***)(int, int))v8)(v8, 1); /*0x68d36a*/
      a1[0xF] = 0.0; /*0x68d36c*/
    }
  }
  return result; /*0x68d374*/
}
