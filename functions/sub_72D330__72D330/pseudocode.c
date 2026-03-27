void __thiscall sub_72D330(unsigned int *this, int a2)
{
  __int16 v3; // dx
  __int16 *v4; // ecx
  __int16 v5; // dx
  int v6; // edi
  int v7; // ebp
  int v8; // ebx
  _DWORD v9[2]; // [esp+10h] [ebp-18h] BYREF
  __int16 v10; // [esp+18h] [ebp-10h]
  __int16 v11; // [esp+1Ah] [ebp-Eh]
  unsigned int *v12; // [esp+1Ch] [ebp-Ch]
  int v13; // [esp+20h] [ebp-8h]

  v3 = *(_WORD *)*this;
  v4 = *(__int16 **)a2;
  v10 = v3;
  v5 = *v4;
  v6 = *(this + 2) + *(_DWORD *)(a2 + 8);
  v13 = a2;
  v11 = v5;
  v7 = 0;
  v12 = this;
  v9[1] = 0;
  v9[0] = 0;
  v8 = FormHeapAlloc((unsigned __int64)(unsigned int)v6 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v6);
  while ( v10 != (__int16)0xFFFF || v11 != (__int16)0xFFFF )
    *(_WORD *)(v8 + 2 * v7++) = sub_72CEC0(v9);
  FormHeapFree(*this);
  *(this + 1) = v6;
  *this = v8;
  *(this + 2) = v7;
}
