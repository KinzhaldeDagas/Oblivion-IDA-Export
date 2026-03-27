double __usercall sub_5E9A60@<st0>(void *a1@<ecx>, double result@<st0>)
{
  PlayerCharacter *v3; // esi
  void *v4; // ebp
  int v5; // eax
  char v6; // bl
  char v7; // cl
  char v8; // al
  float *v9; // eax
  double v10; // rt0
  LowProcess *process; // ecx
  int v12; // eax
  char v13; // bl
  char v14; // cl
  char v15; // [esp+31h] [ebp-39h]
  float v16; // [esp+32h] [ebp-38h]
  float v17; // [esp+32h] [ebp-38h]
  float v18; // [esp+36h] [ebp-34h] BYREF
  float v19; // [esp+3Ah] [ebp-30h] BYREF
  float v20; // [esp+3Eh] [ebp-2Ch] BYREF
  float v21; // [esp+42h] [ebp-28h] BYREF
  float v22; // [esp+46h] [ebp-24h] BYREF
  float v23; // [esp+4Ah] [ebp-20h]
  float v24; // [esp+4Eh] [ebp-1Ch]
  float v25; // [esp+52h] [ebp-18h] BYREF
  float v26; // [esp+56h] [ebp-14h]
  float v27; // [esp+5Ah] [ebp-10h]
  int v28; // [esp+66h] [ebp-4h]

  v3 = (PlayerCharacter *)(*(int (__usercall **)@<eax>(void *@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x388))(a1, result);
  v4 = 0;
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x24 )
    v4 = a1;
  if ( v3 )
  {
    if ( v4 )
    {
      if ( v3->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v3) )
      {
        if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v4 + 0x154))(v4) )
        {
          sub_625290(v4, &v25);
          v5 = (int)*v3->super.super.super.process->GetCharProxy(
                       v3->super.super.super.process,
                       (bhkCharacterProxy **)&v19);
          v28 = 0;
          v6 = 1;
          if ( !v5
            || (((void (__usercall *)(LowProcess *@<ecx>, float *, double@<st0>))v3->super.super.super.process->GetCharProxy)(
                  v3->super.super.super.process,
                  &v18,
                  result),
                v7 = v3 != TESDataHandler_g_PlayerRef,
                v28 = 1,
                v6 = 3,
                result = sub_8949C0(&v25, v7, 0, 0),
                v15 = 1,
                v8) )
          {
            v15 = 0;
          }
          v28 = 0;
          if ( (v6 & 2) != 0 )
          {
            v6 &= ~2u;
            sub_7016A0((NiD3DVertexShader *)&v18);
          }
          v28 = 0xFFFFFFFF;
          if ( (v6 & 1) != 0 )
          {
            v6 &= ~1u;
            sub_7016A0((NiD3DVertexShader *)&v19);
          }
          if ( !v15 )
          {
            v9 = (float *)(*(int (__usercall **)@<eax>(void *@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x174))(a1, result);
            v19 = *v9 - v25;
            v18 = v9[1] - v26;
            v16 = v9[2] - v27;
            v22 = v19;
            v23 = v18;
            v24 = v16;
            sub_43F350(&v22);
            v10 = dbl_A492B0;
            v22 = v22 * v10;
            v23 = v23 * v10;
            v24 = v10 * v24;
            v19 = v22 + v25;
            v18 = v23 + v26;
            v17 = v24 + v27;
            v22 = v19;
            v25 = v19;
            v23 = v18;
            result = v17;
            v26 = v18;
            process = v3->super.super.super.process;
            v24 = v17;
            v27 = v17;
            v12 = (int)*process->GetCharProxy(process, (bhkCharacterProxy **)&v21);
            v13 = v6 | 4;
            v28 = 2;
            if ( v12 )
            {
              ((void (__usercall *)(LowProcess *@<ecx>, float *, double@<st0>))v3->super.super.super.process->GetCharProxy)(
                v3->super.super.super.process,
                &v20,
                result);
              v13 |= 8u;
              v14 = v3 != TESDataHandler_g_PlayerRef;
              v28 = 3;
              result = sub_8949C0(&v25, v14, 0, 0);
            }
            v28 = 2;
            if ( (v13 & 8) != 0 )
            {
              v13 &= ~8u;
              sub_7016A0((NiD3DVertexShader *)&v20);
            }
            v28 = 0xFFFFFFFF;
            if ( (v13 & 4) != 0 )
              sub_7016A0((NiD3DVertexShader *)&v21);
          }
        }
      }
    }
  }
  return result;
}
