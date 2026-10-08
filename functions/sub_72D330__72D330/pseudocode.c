void __thiscall sub_72D330(unsigned int *this, int a2)
{
  __int16 v3; // dx
  __int16 *v4; // ecx
  __int16 v5; // dx
  unsigned int v6; // edi
  unsigned int v7; // ebp
  int v8; // ebx
  _DWORD v9[2]; // [esp+10h] [ebp-18h] BYREF
  __int16 v10; // [esp+18h] [ebp-10h]
  __int16 v11; // [esp+1Ah] [ebp-Eh]
  unsigned int *v12; // [esp+1Ch] [ebp-Ch]
  int v13; // [esp+20h] [ebp-8h]

  v3 = *(_WORD *)*this; /*0x72d349*/
  v4 = *(__int16 **)a2; /*0x72d34c*/
  v10 = v3; /*0x72d34e*/
  v5 = *v4; /*0x72d353*/
  v6 = *(this + 2) + *(_DWORD *)(a2 + 8); /*0x72d35a*/
  v13 = a2; /*0x72d35d*/
  v11 = v5; /*0x72d361*/
  v7 = 0; /*0x72d368*/
  v12 = this; /*0x72d376*/
  v9[1] = 0; /*0x72d37a*/
  v9[0] = 0; /*0x72d37e*/
  v8 = FormHeapAlloc((unsigned __int64)v6 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v6);
  while ( v10 != (__int16)0xFFFF || v11 != (__int16)0xFFFF ) /*0x72d3a2*/
    *(_WORD *)(v8 + 2 * v7++) = sub_72CEC0(v9); /*0x72d3ad*/
  FormHeapFree(*this); /*0x72d3b9*/
  *(this + 1) = v6; /*0x72d3c5*/
  *this = v8; /*0x72d3c9*/
  *(this + 2) = v7; /*0x72d3cb*/
}
