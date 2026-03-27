double __userpurge sub_55C900@<st0>(int a1@<ecx>, double result@<st0>, double a3@<st1>, int a4)
{
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  int v8; // ebp
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  float v13; // [esp+8h] [ebp-2Ch]
  float v14; // [esp+8h] [ebp-2Ch]
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+10h] [ebp-24h]
  _UNKNOWN **v17; // [esp+18h] [ebp-1Ch]
  int *v18; // [esp+1Ch] [ebp-18h]
  float v19; // [esp+28h] [ebp-Ch]
  float v20; // [esp+2Ch] [ebp-8h]
  float v21; // [esp+30h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+34h] [ebp+0h] BYREF

  v5 = 0;
  while ( 2 )
  {
    switch ( v5 )
    {
      case 8:
      case 0xB:
        v6 = (*(int (__usercall **)@<eax>(int@<ecx>, _UNKNOWN **, int *, double@<st0>))(*(_DWORD *)a1 + 0x9C))(
               a1,
               v17,
               v18,
               result);
        v18 = &a4;
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1);
        v17 = &retaddr;
        *(float *)&v15 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 0x5C))(v6);
        result = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v7 + 0x5C))(v7);
        v13 = result;
        sub_54F5E0(v13, COERCE_FLOAT(8), (float *)v15, (float *)0xB);
        if ( v5 != 8 )
          goto LABEL_5;
        a3 = v20;
        goto LABEL_9;
      case 9:
      case 0xA:
        v8 = (*(int (__usercall **)@<eax>(int@<ecx>, _UNKNOWN **, int *, double@<st0>))(*(_DWORD *)a1 + 0x9C))(
               a1,
               v17,
               v18,
               result);
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x9C))(a1);
        v18 = &a4;
        v17 = &retaddr;
        *(float *)&v16 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v8 + 0x5C))(v8);
        result = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v9 + 0x5C))(v9);
        v14 = result;
        sub_54F5E0(v14, COERCE_FLOAT(9), (float *)v16, (float *)0xA);
        if ( v5 == 9 )
          a3 = v20;
        else
LABEL_5:
          a3 = v21;
        goto LABEL_9;
      case 0xE:
      case 0xF:
      case 0x10:
        goto LABEL_15;
      default:
        v10 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x9C))(a1, result);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x5C))(v10, v5);
LABEL_9:
        v19 = a3;
        a3 = v19;
        if ( v19 > 0.0 && a3 <= 1.0 )
        {
          v11 = a4;
          if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a4 + 0x10) + 0x1C))(*(_DWORD *)(a4 + 0x10), v5) )
          {
            if ( !*(_BYTE *)(v11 + 0x1C) )
            {
              sub_5508F0(*(_DWORD *)v11, v11 + 4);
              *(_BYTE *)(v11 + 0x1C) = 1;
            }
            v12 = (*(int (__usercall **)@<eax>(_DWORD@<ecx>, int, double@<st0>))(**(_DWORD **)(v11 + 0x10) + 0x1C))(
                    *(_DWORD *)(v11 + 0x10),
                    v5,
                    result);
            result = v19;
            (*(void (__thiscall **)(int, int, _DWORD, _DWORD, float))(*(_DWORD *)v12 + 4))(
              v12,
              v11 + 4,
              *(_DWORD *)(v11 + 0x18),
              *(_DWORD *)(v11 + 0x14),
              COERCE_FLOAT(LODWORD(v19)));
          }
        }
LABEL_15:
        if ( ++v5 < 0x11 )
          continue;
        return result;
    }
  }
}
