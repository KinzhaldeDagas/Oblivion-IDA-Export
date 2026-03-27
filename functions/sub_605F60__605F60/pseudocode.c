void __thiscall sub_605F60(int *this, int a2, int a3)
{
  double v3; // st7
  int v4; // eax
  float v5; // [esp+0h] [ebp-8h]
  float v6; // [esp+0h] [ebp-8h]
  float v7; // [esp+0h] [ebp-8h]
  float v8; // [esp+0h] [ebp-8h]
  float v9; // [esp+4h] [ebp-4h]
  int v10; // [esp+4h] [ebp-4h]
  float v11; // [esp+4h] [ebp-4h]

  v3 = 0.0;
  v9 = 0.0;
  switch ( *(this + 1) )
  {
    case 0:
      if ( *(this + 5) )
        sub_470520((void *)*(this + 5));
      else
        v4 = *(this + 6);
      v10 = v4;
      if ( !v4 )
        v10 = 1;
      if ( (_BYTE)a3 )
        goto LABEL_8;
      v3 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 0x288))(a2);
      goto LABEL_10;
    case 1:
      if ( (_BYTE)a3 )
      {
        Double_To_SInt32(fCrimeDispPickpocket);
      }
      else
      {
        v8 = ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)a2 + 0x288))(a2, 0x24, LODWORD(v9))
           / fCostant_100
           * fCrimeDispPickpocket;
        Double_To_SInt32(v8);
      }
      return;
    case 2:
      if ( (_BYTE)a3 )
      {
        Double_To_SInt32(flt_B376E0);
      }
      else
      {
        ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)a2 + 0x288))(a2, 0x24, LODWORD(v9));
        def_605F72(a2, a3);
      }
      return;
    case 3:
      if ( (_BYTE)a3 )
      {
        Double_To_SInt32(fCrimeDispAttack);
      }
      else
      {
        v6 = ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)a2 + 0x288))(a2, 0x24, LODWORD(v9))
           / fCostant_100
           * fCrimeDispAttack;
        Double_To_SInt32(v6);
      }
      return;
    case 4:
      if ( (_BYTE)a3 )
      {
        Double_To_SInt32(fCrimeDispMurder);
      }
      else
      {
        v7 = ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)a2 + 0x288))(a2, 0x24, LODWORD(v9))
           / fCostant_100
           * fCrimeDispMurder;
        Double_To_SInt32(v7);
      }
      return;
    case 5:
      v10 = dword_B376B0;
      if ( (_BYTE)a3 )
      {
LABEL_8:
        v11 = (double)v10 * fCrimeDispSteal;
        Double_To_SInt32(v11);
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x288))(a2);
LABEL_10:
        v5 = v3 / fCostant_100 * ((double)0x24 * fCrimeDispSteal);
        Double_To_SInt32(v5);
      }
      return;
    default:
      JUMPOUT(0x60611C);
  }
}
