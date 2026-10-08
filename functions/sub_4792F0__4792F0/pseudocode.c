int __thiscall sub_4792F0(_DWORD *this, UInt32 a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  Ni2DBuffer *v4; // eax
  int v5; // ebp
  int (__stdcall ***v7[4])(signed int); // [esp+14h] [ebp-28h] BYREF
  float v8; // [esp+24h] [ebp-18h]
  float v9; // [esp+28h] [ebp-14h]
  float v10; // [esp+2Ch] [ebp-10h]
  int v11; // [esp+38h] [ebp-4h]

  if ( *(this + 0x19) ) /*0x479319*/
    return 0; /*0x479319*/
  if ( !a2 ) /*0x479326*/
    return 0; /*0x479326*/
  v3 = a3; /*0x47932c*/
  if ( !a3 ) /*0x479332*/
    return 0; /*0x479332*/
  OB_NiCloningProcess_ctor(v7); /*0x47933c*/
  v10 = 1.0; /*0x479343*/
  v9 = 1.0; /*0x479347*/
  v8 = 1.0; /*0x47934b*/
  v11 = 1; /*0x47934f*/
  a2 = 0; /*0x479353*/
  if ( sub_480820(v3) ) /*0x47935d*/
  {
    v4 = (Ni2DBuffer *)sub_4430C0(v3, (int)v7); /*0x479375*/
    NiSmartPointer_Set__((Ni2DBuffer **)&a2, v4); /*0x47937f*/
    v5 = a2; /*0x479384*/
  }
  else
  {
    v5 = sub_700610(v3, (int)v7); /*0x479396*/
  }
  if ( !v5 ) /*0x47939a*/
  {
    LOBYTE(v11) = 0; /*0x479412*/
    NiPointerSlot_Release((void **)&a2); /*0x479416*/
    v11 = 0xFFFFFFFF; /*0x47941f*/
    sub_4781A0(v7); /*0x479427*/
    return 0; /*0x47942c*/
  }
  if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)&MEMORY[0xB33E90][0x13F8], (NiObject *)v5) ) /*0x4793a2*/
    sub_4A01B0((_BYTE *)v5, 7); /*0x4793b2*/
  sub_6FFAC0((_WORD *)v5, off_A3CEB0); /*0x4793be*/
  *(float *)(v5 + 0x54) = g_zeroNiPoint3.x; /*0x4793c9*/
  *(float *)(v5 + 0x58) = g_zeroNiPoint3.y; /*0x4793d1*/
  *(float *)(v5 + 0x5C) = g_zeroNiPoint3.z; /*0x4793da*/
  qmemcpy((void *)(v5 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x4793ea*/
  LOBYTE(v11) = 0; /*0x4793f0*/
  NiPointerSlot_Release((void **)&a2); /*0x4793f4*/
  v11 = 0xFFFFFFFF; /*0x4793fd*/
  sub_4781A0(v7); /*0x479405*/
  return v5; /*0x47942e*/
}
