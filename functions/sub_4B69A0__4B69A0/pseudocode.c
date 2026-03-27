// positive sp value has been detected, the output may be wrong!
char __userpurge sub_4B69A0@<al>(
        char a1@<zf>,
        char a2@<bpl>,
        TESObjectREFR *a3@<edi>,
        PlayerCharacter *a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        int a8,
        int a9,
        int a10,
        TESForm *a11,
        UInt32 a12)
{
  int *v12; // eax
  int *v13; // ebx
  float *v14; // eax
  int v16; // [esp-4h] [ebp-10h]

  if ( a1 )
    goto LABEL_9;
  if ( *(_DWORD *)(v16 + 0x70) )
  {
    if ( a3 )
    {
      if ( a3->vtbl->GetNiNode(a3) )
      {
        if ( OSGlobals->sound )
        {
          a7 = OSGLobals_PlaySound(*(_DWORD *)(*(_DWORD *)(v16 + 0x70) + 0xC), 0x102, 0);
          v13 = v12;
          if ( v12 )
          {
            v14 = a3->vtbl->GetPos(a3);
            a7 = *v14;
            sub_6B7360(v13, *v14, v14[1], v14[2]);
            sub_6B7190(v13, 0);
            sub_6B73E0(v13);
            FormHeapFree((unsigned int)v13);
          }
        }
      }
    }
  }
  if ( a4 == TESDataHandler_g_PlayerRef )
  {
LABEL_9:
    sub_57A8D0(a2, (char)a3, a5, a6, a7, a3, 0, 1, 0);
    return 1;
  }
  else
  {
    if ( a11 )
      a3->vtbl->RemoveItem(a3, a11, 0, a12, 0, 0, (TESObjectREFR *)a4, 0, 0, 1, 0);
    if ( sub_5E32D0(a4) && !TESOBjectREFR_IsOwnedBy(a3, a4, 1) && TESObjectREFR_GetOwner(a3) )
    {
      a4->vtbl->super.Unk_8E((Actor *)a4);
      return 1;
    }
    else
    {
      return 1;
    }
  }
}
