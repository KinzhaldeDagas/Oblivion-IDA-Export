void __thiscall sub_6CEE20(int this, float a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebx
  NiPoint3 *v6; // ebp
  double v7; // st7
  float v8; // [esp+20h] [ebp-A4h]
  int v9; // [esp+38h] [ebp-8Ch] BYREF
  int v10; // [esp+3Ch] [ebp-88h] BYREF
  int v11; // [esp+40h] [ebp-84h]
  float v12[8]; // [esp+44h] [ebp-80h] BYREF
  float v13[8]; // [esp+64h] [ebp-60h] BYREF
  float v14[8]; // [esp+84h] [ebp-40h] BYREF
  _BYTE v15[32]; // [esp+A4h] [ebp-20h] BYREF

  v3 = this;
  v4 = *(unsigned __int8 *)(this + 0xF);
  v5 = *(_DWORD *)(*(_DWORD *)(this + 0x14) + 0x18 * v4);
  v6 = (NiPoint3 *)(*(_DWORD *)(this + 0x50) + 0x68 * v4);
  v11 = this;
  v7 = a2;
  if ( a2 != v6->x )
  {
    if ( v6->x > v7 )
    {
      if ( sub_6CBC10(&v6[3].x) )
      {
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v5 + 0x80))(v5, &v10, &v9);
        sub_470AB0(v12);
        (*(void (__thiscall **)(int, int, int, float *))(*(_DWORD *)v5 + 0x4C))(v5, v10, a3, v12);
        sub_470AB0(v13);
        (*(void (__thiscall **)(int, int, int, float *))(*(_DWORD *)v5 + 0x4C))(v5, v9, a3, v13);
        sub_470AB0(v14);
        sub_6CB4D0(v12, (int)v14);
        qmemcpy(&v6[3], sub_6CB640(v13, (int)v15, (NiPoint3 *)v14), 0x20u);
        v3 = v11;
      }
      if ( !sub_6CBC10((float *)(v3 + 0x30)) )
        qmemcpy((void *)(v3 + 0x30), sub_6CB640((float *)(v3 + 0x30), (int)v15, v6 + 3), 0x20u);
      v7 = a2;
    }
    v8 = v7;
    (*(void (__thiscall **)(int, _DWORD, int, float *))(*(_DWORD *)v5 + 0x4C))(v5, LODWORD(v8), a3, &v6->y);
    v7 = a2;
  }
  v6->x = v7;
}
