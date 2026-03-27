char __cdecl sub_509520(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  OSGlobals *v8; // eax
  _DWORD **sound; // ebx
  int *v10; // eax
  int *v11; // esi
  float *v12; // eax
  float v13; // ecx
  float v14; // edx
  UInt16 v16[2]; // [esp+18h] [ebp-10h] BYREF
  float v17; // [esp+1Ch] [ebp-Ch]
  float v18; // [esp+20h] [ebp-8h]
  float v19; // [esp+24h] [ebp-4h]

  v8 = OSGlobals;
  *(_DWORD *)v16 = 0;
  sound = (_DWORD **)v8->sound;
  if ( sound )
  {
    if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v16) )
    {
      OSGLobals_PlaySound(*(_DWORD *)(*(_DWORD *)v16 + 0xC), 0x102, 0);
      v11 = v10;
      if ( v10 )
      {
        if ( a4 )
        {
          v12 = a4->vtbl->GetPos(a4);
          v13 = *v12;
          v14 = v12[1];
          v19 = v12[2];
          v18 = v14;
          v17 = v13;
          sub_6B7360(v11, v13, v14, v19);
          sub_6AC3E0(sound, *v11, (LONG)a4);
          sub_6B7190(v11, 0);
          sub_6B73E0(v11);
          FormHeapFree((unsigned int)v11);
        }
      }
    }
  }
  return 1;
}
