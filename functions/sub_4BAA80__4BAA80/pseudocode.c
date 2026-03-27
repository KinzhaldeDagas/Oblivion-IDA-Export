void __thiscall sub_4BAA80(_DWORD *this, void *Src, int a3, void *a4, int a5, int a6, int a7, int a8, int a9)
{
  NiObjectNET *v10; // edi
  int v11; // eax
  int *v12; // eax
  int *v13; // eax
  int v14; // [esp+14h] [ebp-230h] BYREF
  void *v15; // [esp+18h] [ebp-22Ch]
  int v16; // [esp+1Ch] [ebp-228h] BYREF
  NiObjectNET *v17; // [esp+20h] [ebp-224h]
  int v18; // [esp+24h] [ebp-220h]
  int *v19; // [esp+28h] [ebp-21Ch]
  int v20[65]; // [esp+2Ch] [ebp-218h] BYREF
  char Str1[260]; // [esp+130h] [ebp-114h] BYREF
  unsigned int v22; // [esp+240h] [ebp-4h]

  v15 = a4;
  if ( a8 && Src && a4 && a5 && byte_B125E8 && sub_4B9CB0((float *)this) )
  {
    v10 = 0;
    if ( !sub_7B2A00(*(this + 3)) )
    {
      sub_4B9C40(this, Str1);
      sub_47D8F0(Str1, (char *)v20);
      v11 = (*(int (__thiscall **)(UInt32, int *, _DWORD))(*(_DWORD *)dword_B35300 + 4))(dword_B35300, v20, 0);
      sub_405070(&v14, v11);
      v22 = 0;
      if ( !v14 )
      {
        v12 = (int *)FormHeapAlloc(0x1Cu);
        v19 = v12;
        LOBYTE(v22) = 1;
        if ( v12 )
          v13 = sub_4BA2D0(v12, (int)this, a6, a7, a8, a5, Src, v15);
        else
          v13 = 0;
        LOBYTE(v22) = 0;
        QueuedTreeBillboard::QueuedTreeBillboard((const char *)v20, v13);
        v22 = 0xFFFFFFFF;
        sub_7016A0((NiD3DVertexShader *)&v14);
        return;
      }
      v10 = sub_4BA780((float *)this, 1);
      v22 = 0xFFFFFFFF;
      sub_7016A0((NiD3DVertexShader *)&v14);
      if ( !v10 )
        return;
    }
    sub_7B20B0(&v16);
    v18 = *(this + 3);
    v17 = v10;
    v16 = 0;
    sub_7B4010(a6, a7, a8, &v16, (int)Src, (int)v15, a5);
    if ( v17 )
      ((void (__thiscall *)(NiObjectNET *, int))*v17->vtbl)(v17, 1);
  }
}
