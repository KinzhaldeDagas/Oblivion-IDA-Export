void __usercall sub_61FAD0(int a1@<ecx>, float a2@<edi>)
{
  int v2; // ecx
  int (__thiscall *v3)(int); // edx
  int v4; // edi
  int v6; // eax
  MobileObject *v7; // edi
  int v8; // eax
  bool v9; // bl
  int v10; // edi
  int v11; // ebx
  float *v12; // edi
  float *v13; // eax
  int v14; // [esp+4h] [ebp-24h]
  float v16; // [esp+10h] [ebp-18h]
  float v17; // [esp+14h] [ebp-14h]
  float v18; // [esp+14h] [ebp-14h]
  float v19; // [esp+14h] [ebp-14h]
  float v20; // [esp+18h] [ebp-10h] BYREF
  float v21[2]; // [esp+1Ch] [ebp-Ch] BYREF
  float v22; // [esp+24h] [ebp-4h]

  if ( *(_BYTE *)(a1 + 0x17D) )
  {
    v6 = *(_DWORD *)(a1 + 0x70);
    if ( v6 == 2 || v6 == 4 )
    {
      v7 = *(MobileObject **)(a1 + 0x3C);
      v14 = *(_DWORD *)(a1 + 0x180);
      v8 = sub_6135F0(a1);
      v17 = sub_61DDF0(v7, v8, &v20, v14);
      v20 = v17 * dbl_A30DC8;
      v20 = fabs(v20);
      v9 = v20 > dbl_A2FC80;
      v18 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 0x3C) + 0x1E0))(*(_DWORD *)(a1 + 0x3C)) + v17;
      if ( v9 )
      {
LABEL_5:
        sub_685530(*(Actor **)(a1 + 0x3C), v18, 1);
        return;
      }
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 0x3C);
      v11 = sub_6135F0(a1);
      v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x174))(v10);
      v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11);
      v20 = v13[1] - v12[1];
      v19 = v13[2] - v12[2];
      v21[0] = *v13 - *v12;
      v21[1] = v20;
      v22 = v19;
      v18 = sub_683CB0(v21);
      v20 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 0x3C) + 0x1E0))(*(_DWORD *)(a1 + 0x3C)) - v18;
      v20 = fabs(v20);
      if ( v20 > dbl_A2FC80 )
        goto LABEL_5;
    }
    v22 = v16;
    if ( *(_BYTE *)(a1 + 0x17D) )
    {
      (*(void (__thiscall **)(_DWORD, int, float))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xC4))(
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        1,
        COERCE_FLOAT(LODWORD(v22)));
      sub_5E05F0(*(Actor **)(a1 + 0x3C), 0x30);
      *(_BYTE *)(a1 + 0x17D) = 0;
    }
    if ( *(_DWORD *)(a1 + 0x1A8) < iAICombatMinDetection )
    {
      v2 = *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58);
      v3 = *(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x4CC);
      v21[0] = a2;
      v4 = v3(v2);
      if ( v4 == sub_6135F0(a1) )
        __asm { jmp     eax }
    }
  }
}
