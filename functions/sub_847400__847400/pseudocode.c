void __thiscall sub_847400(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  int v6; // esi
  NiD3DPass *v8; // ebx
  UInt32 Stage; // ebp
  int v10; // eax
  int v11; // ebp
  NiTexture *Texture; // ebp
  int v13; // eax
  UInt32 m_uiRefCount; // ebp
  NiTArray_NiD3DPass *v15; // edi
  double v16; // st6
  double v17; // rt0
  double v18; // st6
  double v19; // st7
  double v20; // st6
  _DWORD *v22; // [esp-4h] [ebp-40h]
  int v24; // [esp+14h] [ebp-28h]
  int v25; // [esp+18h] [ebp-24h]
  int v26; // [esp+18h] [ebp-24h]
  int v27; // [esp+18h] [ebp-24h]
  int v28; // [esp+1Ch] [ebp-20h]
  int v29; // [esp+28h] [ebp-14h]
  UInt32 v30; // [esp+4Ch] [ebp+10h]
  NiTexture *v31; // [esp+4Ch] [ebp+10h]
  int v32; // [esp+4Ch] [ebp+10h]

  v6 = *(unsigned __int8 *)(dword_B42EB8 + 9);
  v8 = (NiD3DPass *)dword_B45B6C;
  *(float *)&v29 = (float)*(unsigned __int8 *)(a5[0x32] + v6);
  sub_7ECAE0(0x1Fu, COERCE_INT(1.0), dword_B25AD4, v29, dword_B25ADC);
  Stage = v8->Stages.data->Stage;
  v30 = Stage;
  v10 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v6);
  v11 = *(_DWORD *)(Stage + 4);
  v25 = v10;
  if ( v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
      v10 = v25;
    }
    *(_DWORD *)(v30 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  sub_848FA0((_DWORD **)v30, (int)a5);
  Texture = v8->Stages.data->Texture;
  v31 = Texture;
  v13 = sub_848FD0(a5, v6);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v26 = v13;
  if ( m_uiRefCount != v13 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v13 = v26;
    }
    v31->members.super.super.m_uiRefCount = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  v22 = a5;
  v15 = this;
  sub_848FA0(v31, (int)v22);
  if ( v6 == 4 )
  {
    v16 = 1.0;
    *(float *)&v28 = 1.0;
  }
  else
  {
    *(float *)&v28 = 0.0;
    v16 = 1.0;
    if ( v6 == 3 )
    {
      *(float *)&v24 = 1.0;
      v18 = 0.0;
      v19 = 1.0;
      goto LABEL_21;
    }
  }
  v17 = v16;
  v18 = 0.0;
  v19 = v17;
  *(float *)&v24 = 0.0;
  if ( v6 == 2 )
  {
    v20 = v19;
    v19 = 0.0;
    *(float *)&v27 = v20;
    goto LABEL_23;
  }
LABEL_21:
  *(float *)&v27 = v18;
  if ( v6 != 1 )
    v19 = v18;
LABEL_23:
  *(float *)&v32 = v19;
  sub_7ECAE0(2u, v32, v27, v24, v28);
  sub_7ECAE0(3u, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
  if ( (_BYTE)a6 )
  {
    ++v8->RefCount;
    a6 = v8;
    sub_76CE40(v15 + 4, *(NiD3DPass **)&v15[3].capacity, &a6);
    if ( v8->RefCount-- == 1 )
      sub_7604D0(v8);
    ++*(_DWORD *)&v15[3].capacity;
  }
}
