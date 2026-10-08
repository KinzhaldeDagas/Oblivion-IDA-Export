NiAVObject *__thiscall sub_4BFF00(TESObjectCELL **this, unsigned __int8 a2)
{
  NiAVObject *result; // eax
  void *v3; // ebx
  _WORD *v4; // ebp
  _WORD *v5; // eax
  NiAVObject *v6; // eax
  NiAVObject *v7; // esi
  float v8; // edx
  float v9; // eax
  int v11; // [esp+18h] [ebp-128h]
  float v12[4]; // [esp+1Ch] [ebp-124h] BYREF
  char Src[260]; // [esp+2Ch] [ebp-114h] BYREF
  unsigned int v14; // [esp+13Ch] [ebp-4h]

  result = 0; /*0x4bff3b*/
  if ( a2 < 4u ) /*0x4bff49*/
  {
    if ( *(this + 9) ) /*0x4bff4f*/
    {
      v3 = (void *)FormHeapAlloc(0x908u); /*0x4bff68*/
      qmemcpy(v3, (const void *)unk_B35BD4, 0x908u); /*0x4bff73*/
      v4 = (_WORD *)FormHeapAlloc(2u); /*0x4bff7f*/
      v5 = (_WORD *)FormHeapAlloc(0x7FAu); /*0x4bff81*/
      *v4 = 0x3FD; /*0x4bff86*/
      qmemcpy(v5, &off_B08BA8, 0x7F8u); /*0x4bff98*/
      v11 = (int)v5; /*0x4bff9f*/
      v5[0x3FC] = unk_B093A0; /*0x4bffa3*/
      v6 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x4bffa5*/
      LODWORD(v12[3]) = v6; /*0x4bffad*/
      v14 = 0; /*0x4bffb3*/
      if ( v6 ) /*0x4bffbe*/
        v7 = sub_719960( /*0x4c000a*/
               v6,
               0x121u,
               *(NiPoint3 **)(*(_DWORD *)&(*(this + 9))->members.super.type + 4 * a2),
               *(NiPoint3 **)((*(this + 9))->members.super.flags + 4 * a2),
               *(NiColorAlpha **)((*(this + 9))->members.super.refID + 4 * a2),
               v3,
               1,
               0,
               *v4 - 2,
               1,
               (int)v4,
               v11);
      else
        v7 = 0; /*0x4c000e*/
      v14 = 0xFFFFFFFF; /*0x4c0022*/
      sub_4BFE00(this, v12, a2); /*0x4c002d*/
      v8 = v12[1]; /*0x4c0036*/
      v9 = v12[2]; /*0x4c003a*/
      v7->members.m_localTransform.pos.x = v12[0]; /*0x4c003e*/
      v7->members.m_localTransform.pos.y = v8; /*0x4c004c*/
      v7->members.m_localTransform.pos.z = v9; /*0x4c004f*/
      _sprintf(Src, "Block (%i, %i)", a2 & 3, a2 >> 2); /*0x4c0065*/
      NiObjectNET_SetName((NiObjectNET *)v7, Src); /*0x4c0074*/
      return v7; /*0x4c0079*/
    }
  }
  return result; /*0x4c007b*/
}
