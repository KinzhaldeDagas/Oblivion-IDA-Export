void __thiscall sub_689300(float *this, TESObjectREFR *a2, float *a3, int a4)
{
  NiPoint3 *v8; // eax
  const char *v9; // eax
  float *v10; // eax
  const char *v11; // eax
  char v12; // dl
  char v13; // bl
  NiNode *Health; // eax
  BSExtraDataVtbl *v15; // eax
  BSExtraDataVtbl *v16; // ebx
  float v17[6]; // [esp+14h] [ebp-244h] BYREF
  char v18; // [esp+2Ch] [ebp-22Ch]
  char Format[260]; // [esp+40h] [ebp-218h] BYREF
  char v20[260]; // [esp+144h] [ebp-114h] BYREF
  unsigned int v21; // [esp+254h] [ebp-4h]

  sub_684EC0((int **)this);
  if ( TESObjectREFR_GetParentCell(a2) )
  {
    if ( PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
    {
      sub_68B440((int *)this, a2, (int)a3, a4);
      return;
    }
    v8 = (NiPoint3 *)a2->vtbl->GetPos(a2);
    if ( sub_689230((TESChildCELL *)a2, v8, a3) )
    {
      if ( srcObj == (TESChildCELL *)a2 && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || byte_B3B908) )
      {
        v9 = a2->vtbl->super.GetEditorName((TESForm *)a2);
        _sprintf(Format, "Actor '%s' building straight path.", v9);
        Interface_ConsolePrint(Format);
      }
      sub_68C6E0((_DWORD *)this + 5);
      v10 = a2->vtbl->GetPos(a2);
      sub_68BED0((_DWORD *)this + 5, v10);
      sub_68BED0((_DWORD *)this + 5, a3);
      if ( byte_B3C08A )
        sub_685EA0(this, (int)a2);
    }
    else
    {
      if ( srcObj == (TESChildCELL *)a2 && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || byte_B3B908) )
      {
        v11 = a2->vtbl->super.GetEditorName((TESForm *)a2);
        _sprintf(v20, "Actor '%s' building full high level path.", v11);
        Interface_ConsolePrint(v20);
      }
      sub_67D760(v17);
      v12 = *((_BYTE *)this + 0x10);
      v21 = 0;
      v18 = v12;
      v13 = sub_67EB60(v17, a2->member.pos, a3, a2, *(float *)&a4);
      sub_67E3D0((char *)v17, (int *)this + 5, a2);
      if ( !v13 && !sub_5E34B0(a2) )
      {
        Health = TESHealthForm_GetHealth((Sky *)(this + 5));
        sub_68C170((int *)this + 5, Health);
        *((_BYTE *)this + 0x2C) |= 0x80u;
      }
      sub_686300((char *)this, (MobileObject *)a2);
      sub_684000((int *)this, (Actor *)a2);
      v15 = sub_42B410((BSExtraData *)(this + 5));
      v16 = v15;
      if ( v15
        && (sub_68CAE0(v15)
         || sub_68CAB0(v16) && (!Actor_CanSwim((Actor *)a2) || !sub_5E3400((Actor *)a2))
         || !sub_68CAB0(v16) && sub_5E1E90(a2)) )
      {
        sub_684EC0((int **)this);
        (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0x30))(this, 1);
        ((void (__thiscall *)(TESObjectREFR *, int))a2->vtbl->Unk_60)(a2, 1);
        v21 = 0xFFFFFFFF;
        TESTexture::ClearComponentReferences(v17);
        return;
      }
      if ( byte_B3C08A )
        sub_685EA0(this, (int)a2);
      v21 = 0xFFFFFFFF;
      TESTexture::ClearComponentReferences(v17);
    }
    sub_6847B0((int *)this);
  }
}
