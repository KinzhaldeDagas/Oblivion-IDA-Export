NiNode *__thiscall sub_8A30E0(_DWORD *this, NiObjectNET *a2)
{
  NiNode *result; // eax
  NiObjectNET *v4; // esi
  NiAVObject *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8[3]; // [esp+1Ch] [ebp-2Ch] BYREF
  __m128 v9; // [esp+28h] [ebp-20h] BYREF

  result = sub_89F730(this, a2); /*0x8a30fc*/
  v4 = (NiObjectNET *)result; /*0x8a3101*/
  if ( result ) /*0x8a3105*/
  {
    (*(void (__thiscall **)(_DWORD *, __m128 *))(*this + 0xA4))(this, &v9); /*0x8a3116*/
    HavokVector_ToWorldVector(v8, &v9); /*0x8a3122*/
    v5 = sub_6FD1D0(flt_A5977C); /*0x8a3133*/
    if ( v5 ) /*0x8a313d*/
    {
      v6 = v8[1]; /*0x8a3143*/
      v5->members.m_localTransform.pos.x = v8[0]; /*0x8a3147*/
      v7 = v8[2]; /*0x8a314a*/
      v5->members.m_localTransform.pos.y = v6; /*0x8a314e*/
      v5->members.m_localTransform.pos.z = v7; /*0x8a3151*/
      (*((void (__thiscall **)(NiObjectNET *, NiAVObject *, _DWORD))v4->vtbl + 0x21))(v4, v5, 0); /*0x8a3161*/
    }
    return (NiNode *)v4; /*0x8a3163*/
  }
  return result; /*0x8a3165*/
}
