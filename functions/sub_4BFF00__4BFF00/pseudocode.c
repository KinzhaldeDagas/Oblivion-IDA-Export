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

  result = 0;
  if ( a2 < 4u )
  {
    if ( *(this + 9) )
    {
      v3 = (void *)FormHeapAlloc(0x908u);
      qmemcpy(v3, (const void *)dword_B35BD4, 0x908u);
      v4 = (_WORD *)FormHeapAlloc(2u);
      v5 = (_WORD *)FormHeapAlloc(0x7FAu);
      *v4 = 0x3FD;
      qmemcpy(v5, &off_B08BA8, 0x7F8u);
      v11 = (int)v5;
      v5[0x3FC] = unk_B093A0;
      v6 = (NiAVObject *)FormHeapAlloc(0xC0u);
      LODWORD(v12[3]) = v6;
      v14 = 0;
      if ( v6 )
        v7 = sub_719960(
               v6,
               0x121,
               *(_DWORD *)(*(_DWORD *)&(*(this + 9))->members.super.type + 4 * a2),
               *(_DWORD *)((*(this + 9))->members.super.flags + 4 * a2),
               *(_DWORD *)((*(this + 9))->members.super.refID + 4 * a2),
               (int)v3,
               1,
               0,
               *v4 - 2,
               1,
               (int)v4,
               v11);
      else
        v7 = 0;
      v14 = 0xFFFFFFFF;
      sub_4BFE00(this, v12, a2);
      v8 = v12[1];
      v9 = v12[2];
      v7->members.m_localTransform.pos.x = v12[0];
      v7->members.m_localTransform.pos.y = v8;
      v7->members.m_localTransform.pos.z = v9;
      _sprintf(Src, "Block (%i, %i)", a2 & 3, a2 >> 2);
      NiObjectNET_SetName((NiObjectNET *)v7, Src);
      return v7;
    }
  }
  return result;
}
