// Verified: merges Map region-data fields with priority/override handling and invokes Map's data-application virtual; exact semantic name of the applied payload remains Candidate.
void __thiscall TESRegionDataMap_MergeForSelection(_BYTE *this, _BYTE *a2, int a3)
{
  void (__thiscall *v4)(_BYTE *, int); // eax
  char v5; // cl
  int v6; // eax
  char v7; // al
  void (__thiscall *v8)(_BYTE *, int); // eax
  int v9; // ecx
  int v10; // [esp+8h] [ebp-2Ch]
  int v11; // [esp+8h] [ebp-2Ch]
  unsigned int v12[2]; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int v13[2]; // [esp+20h] [ebp-14h] BYREF
  int v14; // [esp+30h] [ebp-4h]
  float v15; // [esp+38h] [ebp+4h]
  float v16; // [esp+38h] [ebp+4h]
  int v17; // [esp+3Ch] [ebp+8h]

  if ( a2 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0xC))(a2) == 4 && a3 ) /*0x4a4c3a*/
  {
    if ( *(this + 5) ) /*0x4a4c40*/
    {
      *(this + 4) = a2[4]; /*0x4a4c49*/
      sub_4A3520(this, a2[6]); /*0x4a4c5b*/
      v10 = (*(int (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x28))(a2, v12); /*0x4a4c70*/
      v4 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x2C); /*0x4a4c71*/
      v14 = 0; /*0x4a4c76*/
      v4(this, v10); /*0x4a4c7e*/
      FormHeapFree(v12[0]); /*0x4a4c85*/
      return; /*0x4a4c9e*/
    }
    if ( !a2[5] ) /*0x4a4ca1*/
    {
      if ( *(this + 4) ) /*0x4a4cab*/
      {
        v5 = a2[4]; /*0x4a4cb1*/
        if ( v5 && a2[6] > *(this + 6) ) /*0x4a4cc2*/
        {
          *(this + 4) = v5; /*0x4a4cc8*/
          sub_4A3520(this, a2[6]); /*0x4a4cd9*/
          v6 = (*(int (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x28))(a2, v12); /*0x4a4cea*/
          v14 = 1; /*0x4a4cec*/
LABEL_13:
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x2C))(this, v6); /*0x4a4d29*/
          v14 = 0xFFFFFFFF; /*0x4a4d37*/
          BSStringT_Clear(v12); /*0x4a4d3f*/
        }
      }
      else
      {
        v7 = a2[4]; /*0x4a4cf6*/
        if ( v7 ) /*0x4a4cfb*/
        {
          *(this + 4) = v7; /*0x4a4cfd*/
          sub_4A3520(this, a2[6]); /*0x4a4d0e*/
          v6 = (*(int (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x28))(a2, v12); /*0x4a4d1f*/
          v14 = 2; /*0x4a4d21*/
          goto LABEL_13; /*0x4a4d21*/
        }
        if ( a2[6] > *(this + 6) ) /*0x4a4d5e*/
        {
          v11 = (*(int (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x28))(a2, v13); /*0x4a4d70*/
          v8 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x2C); /*0x4a4d71*/
          v14 = 3; /*0x4a4d76*/
          v8(this, v11); /*0x4a4d7e*/
          v14 = 0xFFFFFFFF; /*0x4a4d84*/
          BSStringT_Clear(v13); /*0x4a4d8c*/
        }
        v9 = (unsigned __int8)a2[6]; /*0x4a4d91*/
        v15 = (double)((unsigned __int8)*(this + 6) * (unsigned __int8)*(this + 6) /*0x4a4dcc*/
                     + v9 * (0x64 - (unsigned __int8)*(this + 6)))
            + (double)(v9 * v9 + (unsigned __int8)*(this + 6) * (0x64 - v9));
        v16 = v15 * dbl_A40048; /*0x4a4dda*/
        v17 = (int)sub_4842F0(v16); /*0x4a4e03*/
        sub_4A3520(this, v17); /*0x4a4e13*/
      }
    }
  }
}
