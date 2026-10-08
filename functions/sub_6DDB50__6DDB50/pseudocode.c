char __thiscall sub_6DDB50(int this, int applicationTime)
{
  int v3; // eax
  int v4; // ebp
  float *v5; // esi
  float v6; // edi
  bool v7; // zf
  int v8; // ebp
  _DWORD *v9; // ebx
  char v11[4]; // [esp+28h] [ebp-38h] BYREF
  int v12; // [esp+2Ch] [ebp-34h] BYREF
  int v13[3]; // [esp+30h] [ebp-30h] BYREF
  NiMatrix33 v14; // [esp+3Ch] [ebp-24h] BYREF

  v3 = *(_DWORD *)(this + 0x4C); /*0x6ddb56*/
  if ( v3 ) /*0x6ddb5b*/
  {
    v4 = *(_DWORD *)(v3 + 0x10); /*0x6ddb62*/
    v5 = *(float **)(v3 + 0xC); /*0x6ddb66*/
    v6 = *(float *)(v3 + 8); /*0x6ddb6c*/
    if ( v5 ) /*0x6ddb6f*/
    {
      v3 = *(_DWORD *)(this + 0x48); /*0x6ddb75*/
      if ( v3 ) /*0x6ddb7a*/
      {
        v7 = *(_DWORD *)(v3 + 0xC) == 0; /*0x6ddb80*/
        v11[0] = *(_BYTE *)(v3 + 0x14); /*0x6ddb87*/
        if ( !v7 ) /*0x6ddb8b*/
        {
          LOBYTE(v3) = NiTimeController_IsUpdateUnchanged((NiTimeController *)this, *(float *)&applicationTime); /*0x6ddb9b*/
          if ( !(_BYTE)v3 ) /*0x6ddba2*/
          {
            *(float *)&applicationTime = NiFloatKey_EvaluateTrack( /*0x6ddbc3*/
                                           *(float *)(this + 0x28),
                                           v5,
                                           v4,
                                           v6,
                                           (int *)(this + 0x44),
                                           v11[0]);
            sub_6DD710(this, *(float *)&applicationTime, (unsigned int *)v11, &v12, (float *)&applicationTime); /*0x6ddbe0*/
            v8 = v12; /*0x6ddbe8*/
            if ( (*(_BYTE *)(this + 0x3C) & 0x20) != 0 ) /*0x6ddbf2*/
            {
              sub_6DC940((_DWORD *)this, *(int *)v11, v12, *(float *)&applicationTime, &v14); /*0x6ddc09*/
              qmemcpy((void *)(*(_DWORD *)(this + 0x30) + 0x30), &v14, 0x24u); /*0x6ddc1d*/
            }
            sub_6DC8E0((_DWORD *)this, (int)v13, *(int *)v11, v8, *(float *)&applicationTime); /*0x6ddc34*/
            LOBYTE(v3) = v13[0]; /*0x6ddc3c*/
            v9 = (_DWORD *)(*(_DWORD *)(this + 0x30) + 0x54); /*0x6ddc40*/
            *v9 = v13[0]; /*0x6ddc43*/
            v9[1] = v13[1]; /*0x6ddc49*/
            v9[2] = v13[2]; /*0x6ddc50*/
          }
        }
      }
    }
  }
  return v3; /*0x6ddc56*/
}
