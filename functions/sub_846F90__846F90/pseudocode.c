void __thiscall sub_846F90(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  int v6; // ebx
  NiD3DPass *v8; // edi
  UInt32 Stage; // ebp
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  UInt32 m_uiRefCount; // ebx
  int v15; // [esp+14h] [ebp-24h]
  int v16; // [esp+14h] [ebp-24h]
  int v18; // [esp+24h] [ebp-14h]
  UInt32 v19; // [esp+48h] [ebp+10h]
  NiTexture *Texture; // [esp+48h] [ebp+10h]

  v6 = *(unsigned __int8 *)(dword_B42EB8 + 9);
  v8 = (NiD3DPass *)dword_B45B50;
  *(float *)&v18 = (float)*(unsigned __int8 *)(a5[0x32] + v6);
  sub_7ECAE0(0x1Fu, COERCE_INT(1.0), dword_B25AD4, v18, dword_B25ADC);
  Stage = v8->Stages.data->Stage;
  v19 = Stage;
  v10 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v6);
  v11 = *(_DWORD *)(Stage + 4);
  v15 = v10;
  if ( v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
      v10 = v15;
    }
    *(_DWORD *)(v19 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  sub_848FA0((_DWORD **)v19, (int)a5);
  Texture = v8->Stages.data->Texture;
  v12 = sub_848FD0(a5, v6);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v16 = v12;
  if ( m_uiRefCount != v12 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v12 = v16;
    }
    Texture->members.super.super.m_uiRefCount = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  sub_848FA0(Texture, (int)a5);
  if ( (_BYTE)a6 )
  {
    ++v8->RefCount;
    a6 = v8;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v8->RefCount-- == 1 )
      sub_7604D0(v8);
    ++*((_DWORD *)this + 0xE);
  }
}
