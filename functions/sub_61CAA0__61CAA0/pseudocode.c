void __userpurge sub_61CAA0(int a1@<ecx>, char a2@<dil>, int a3, float a4, float a5)
{
  int v6; // eax
  int v7; // edi
  int v8; // eax
  double v9; // st6
  double v10; // st7
  float v11; // [esp+Ch] [ebp+8h]
  float v12; // [esp+10h] [ebp+Ch]

  v6 = *(_DWORD *)(a1 + 0x6C);
  if ( v6 != 0xE && v6 != 0x10 && a5 > 0.0 && a4 > 0.0 && a5 > sub_615980(a1, a2) )
  {
    v7 = *(_DWORD *)(a1 + 0x3C);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 0x58) )
      {
        *(float *)(a1 + 0x170) = a5;
        v8 = sub_6135F0(a1);
        if ( !sub_6131D0(v7, v8, 0) || (*(_BYTE *)(a1 + 0x192) & 2) != 0 )
        {
          *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44);
          *(float *)(a1 + 0xD8) = a4;
          *(float *)(a1 + 0xDC) = flt_A30634;
          sub_619920(a1, 0xE);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x180))(*(_DWORD *)(a1 + 0x3C), 0);
        }
        else
        {
          sub_614BB0(a1);
          v12 = sub_5E5850((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), 4);
          v9 = a4;
          if ( a4 >= (double)v12 )
          {
            v10 = a4;
          }
          else
          {
            v9 = v12;
            v10 = a4;
          }
          v11 = v9;
          *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44);
          *(float *)(a1 + 0xD8) = v11;
          *(float *)(a1 + 0xDC) = v10;
          sub_619920(a1, 0x10);
          sub_6160B0((Actor **)a1);
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))(
            *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
            0x102,
            1);
        }
      }
    }
  }
}
