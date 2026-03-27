int __thiscall sub_686150(int this, Actor *a2)
{
  int result; // eax
  char *v5; // ebx
  bhkCharacterProxy *CharProxy; // eax
  float *v7; // edi
  float *v8; // eax
  double v9; // st6
  char v10; // bl
  int v11; // [esp+14h] [ebp-10h]
  int v12[3]; // [esp+18h] [ebp-Ch] BYREF
  int v13; // [esp+28h] [ebp+4h]
  float v14; // [esp+28h] [ebp+4h]
  float v15; // [esp+28h] [ebp+4h]

  result = (int)sub_42B410((BSExtraData *)(this + 0x14));
  v5 = (char *)result;
  if ( a2 )
  {
    if ( result )
    {
      if ( !sub_5E3290(a2)
        || (CharProxy = MobileObject_GetCharProxy((MobileObject *)a2)) == 0
        || (result = sub_88D370((_DWORD *)CharProxy + 0x78), result != 2) )
      {
        v7 = a2->vtbl->super.super.GetPos((TESObjectREFR *)a2);
        v8 = (float *)sub_6899C0(v5);
        *(float *)&v13 = v8[1] - v7[1];
        *(float *)&v11 = v8[2] - v7[2];
        *(float *)v12 = *v8 - *v7;
        v12[1] = v13;
        v12[2] = v11;
        v14 = sub_683CB0((float *)v12);
        v15 = sub_683B90(this, (int)a2, v14);
        if ( (a2->members.super.process->GetMovementFlags(a2->members.super.process) & 2) != 0 )
        {
          v15 = v15 + dbl_A3D5B8;
          v9 = dbl_A3D5B0;
          if ( v9 < v15 )
            v15 = v15 - v9;
        }
        v10 = bSnapToAngle;
        if ( sub_47F6F0((float *)v12, flt_B3A468) < 0 )
          v10 = 1;
        *(_BYTE *)(this + 0x2C) &= ~0x20u;
        if ( v10 )
        {
          return ((int (__thiscall *)(Actor *, float))a2->vtbl->super.Unk_7A)(a2, COERCE_FLOAT(LODWORD(v15)));
        }
        else
        {
          sub_685530(a2, v15, 0);
          result = a2->members.super.process->GetMovementFlags(a2->members.super.process);
          if ( (result & 0x30) != 0 )
            *(_BYTE *)(this + 0x2C) |= 0x20u;
        }
      }
    }
  }
  return result;
}
