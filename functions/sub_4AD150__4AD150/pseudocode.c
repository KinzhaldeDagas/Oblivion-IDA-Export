bool __thiscall sub_4AD150(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  bool result; // al
  float *v6; // eax
  float *v7; // eax
  unsigned __int8 v8; // al
  unsigned __int8 vtbl; // cl
  float *v10; // [esp-4h] [ebp-24h]
  float *v11; // [esp-4h] [ebp-24h]
  _DWORD v12[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESEffectShader `RTTI Type Descriptor',
                    0);
  v4 = v3;
  result = !v3
        || TESForm_CompareAllComponentsTo(this, v3)
        || (*(unsigned __int8 (__thiscall **)(char *, TESForm::FormFlags *))(*((_DWORD *)this + 0x3E) + 0xC))(
             (char *)this + 0xF8,
             &v4[0xA].member.flags)
        || (*(unsigned __int8 (__thiscall **)(char *, TESForm::ModReferenceList **))(*((_DWORD *)this + 0x41) + 0xC))(
             (char *)this + 0x104,
             &v4[0xA].member.modlist.next)
        || *((_DWORD *)this + 7) != *(_DWORD *)&v4[1].member.type
        || *((_DWORD *)this + 8) != v4[1].member.flags
        || *((_DWORD *)this + 9) != v4[1].member.refID
        || *((Data **)this + 0xA) != v4[1].member.modlist.data
        || *(float *)&v4[1].member.modlist.next != *((float *)this + 0xB)
        || *(float *)&v4[2].vtbl != *((float *)this + 0xC)
        || *(float *)&v4[2].member.type != *((float *)this + 0xD)
        || *(float *)&v4[2].member.flags != *((float *)this + 0xE)
        || *(float *)&v4[2].member.refID != *((float *)this + 0xF)
        || *(float *)&v4[2].member.modlist.data != *((float *)this + 0x10)
        || *(float *)&v4[2].member.modlist.next != *((float *)this + 0x11)
        || *(float *)&v4[3].vtbl != *((float *)this + 0x12)
        || *(float *)&v4[3].member.type != *((float *)this + 0x13)
        || *((_DWORD *)this + 0x14) != v4[3].member.flags
        || *(float *)&v4[3].member.refID != *((float *)this + 0x15)
        || *(float *)&v4[3].member.modlist.data != *((float *)this + 0x16)
        || *(float *)&v4[3].member.modlist.next != *((float *)this + 0x17)
        || *(float *)&v4[4].vtbl != *((float *)this + 0x18)
        || *(float *)&v4[4].member.type != *((float *)this + 0x19)
        || *(float *)&v4[4].member.flags != *((float *)this + 0x1A)
        || *((TESForm::ModReferenceList **)this + 0x1D) != v4[4].member.modlist.next
        || *(float *)&v4[4].member.refID != *((float *)this + 0x1B)
        || *(float *)&v4[4].member.modlist.data != *((float *)this + 0x1C)
        || *((TESFormVtbl **)this + 0x1E) != v4[5].vtbl
        || *((_DWORD *)this + 0x21) != v4[5].member.refID
        || *((_DWORD *)this + 0x1F) != *(_DWORD *)&v4[5].member.type
        || *((_DWORD *)this + 0x20) != v4[5].member.flags
        || *(float *)&v4[5].member.modlist.data != *((float *)this + 0x22)
        || *(float *)&v4[5].member.modlist.next != *((float *)this + 0x23)
        || *(float *)&v4[6].vtbl != *((float *)this + 0x24)
        || *(float *)&v4[6].member.type != *((float *)this + 0x25)
        || *(float *)&v4[6].member.flags != *((float *)this + 0x26)
        || *(float *)&v4[6].member.refID != *((float *)this + 0x27)
        || *(float *)&v4[6].member.modlist.data != *((float *)this + 0x28)
        || *(float *)&v4[6].member.modlist.next != *((float *)this + 0x29)
        || *(float *)&v4[7].vtbl != *((float *)this + 0x2A)
        || (v10 = (float *)sub_4AC7C0(v4, v12), v6 = (float *)sub_4AC7C0(this, v13), sub_8AA390(v6, v10))
        || *(float *)&v4[7].vtbl != *((float *)this + 0x2A)
        || (v11 = (float *)sub_4AC7F0(v4, v13), v7 = (float *)sub_4AC7F0(this, v12), sub_8AA390(v7, v11))
        || *(float *)&v4[8].member.type != *((float *)this + 0x31)
        || *(float *)&v4[8].member.flags != *((float *)this + 0x32)
        || *(float *)&v4[8].member.refID != *((float *)this + 0x33)
        || *(float *)&v4[8].member.modlist.data != *((float *)this + 0x34)
        || *((TESForm::ModReferenceList **)this + 0x35) != v4[8].member.modlist.next
        || *((TESFormVtbl **)this + 0x36) != v4[9].vtbl
        || *((_DWORD *)this + 0x37) != *(_DWORD *)&v4[9].member.type
        || *(float *)&v4[9].member.flags != *((float *)this + 0x38)
        || *(float *)&v4[9].member.refID != *((float *)this + 0x39)
        || *(float *)&v4[9].member.modlist.data != *((float *)this + 0x3A)
        || *(float *)&v4[9].member.modlist.next != *((float *)this + 0x3B)
        || *(float *)&v4[0xA].vtbl != *((float *)this + 0x3C)
        || *(float *)&v4[0xA].member.type != *((float *)this + 0x3D)
        || (v8 = *((_BYTE *)this + 0x18), vtbl = (unsigned __int8)v4[1].vtbl, ((vtbl ^ v8) & 1) != 0)
        || ((vtbl ^ v8) & 8) != 0
        || ((vtbl ^ v8) & 0x10) != 0
        || ((vtbl ^ v8) & 0x20) != 0;
  return result;
}
