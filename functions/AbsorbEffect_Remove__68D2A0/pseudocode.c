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
  float v14; // [esp+10h] [ebp-8h] BYREF
  float v15; // [esp+14h] [ebp-4h]

  ValueModifierEffect_Remove();
  if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 3) + 0x1C) + 0x58) & 2) != 0 )
  {
    v3 = *((MagicCaster **)a1 + 9);
    if ( v3 )
      ParentActor = (TESObjectREFR *)MagicCaster_GetParentActor(v3);
    else
      ParentActor = 0;
    v15 = a1[6];
    ValueModifierEffect_GetEffectiveMagnitude(v15, v12, v14);
    v14 = v15;
    ValueModifierEffect_ModifyAV((int)a1, ParentActor, SLODWORD(v15), v11, v13);
  }
  sub_7F4420(*((_DWORD *)a1 + 0xF), *((_DWORD *)a1 + 0x12));
  result = *((_DWORD *)a1 + 0xF);
  if ( result )
  {
    v6 = *(_DWORD *)(result + 0x1C);
    v7 = InterlockedDecrement;
    if ( v6 )
    {
      (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)v6 + 0x88))(v6, &v14, result, a2);
      result = v10;
      if ( v10 )
      {
        result = v7((volatile LONG *)(v10 + 4));
        if ( !result )
          result = (**(int (__thiscall ***)(int, int))v10)(v10, 1);
      }
    }
    v8 = *((_DWORD *)a1 + 0xF);
    if ( v8 )
    {
      result = v7((volatile LONG *)(v8 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v8)(v8, 1);
      a1[0xF] = 0.0;
    }
  }
  return result;
}
