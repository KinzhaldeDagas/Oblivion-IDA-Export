// positive sp value has been detected, the output may be wrong!
char __userpurge sub_4B69A0@<al>(
        char a1@<zf>,
        TESObjectREFR *a2@<edi>,
        TESObjectREFR *a3@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7,
        int a8,
        int a9,
        TESForm *a10,
        UInt32 a11)
{
  int *sound; // ecx
  int *v13; // ebx
  float *v14; // eax
  int v16; // [esp-4h] [ebp-10h]

  if ( a1 ) /*0x4b69a0*/
    goto LABEL_9; /*0x4b69a0*/
  if ( *(_DWORD *)(v16 + 0x70) ) /*0x4b69aa*/
  {
    if ( a2 ) /*0x4b69b6*/
    {
      if ( a2->vtbl->GetNiNode(a2) ) /*0x4b69c6*/
      {
        sound = (int *)MEMORY[0xB33398]->sound; /*0x4b69d6*/
        if ( sound ) /*0x4b69db*/
        {
          v13 = OSGLobals_PlaySound(sound, *(void **)(*(_DWORD *)(v16 + 0x70) + 0xC), 0x102, 0); /*0x4b69f0*/
          if ( v13 ) /*0x4b69f4*/
          {
            v14 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a2->vtbl->GetPos)( /*0x4b6a00*/
                             a2,
                             a6,
                             a5,
                             a4);
            a6 = *v14; /*0x4b6a2b*/
            sub_6B7360(v13, *v14, v14[1], v14[2]); /*0x4b6a32*/
            sub_6B7190(v13, 0); /*0x4b6a3b*/
            sub_6B73E0(v13); /*0x4b6a42*/
            FormHeapFree((unsigned int)v13); /*0x4b6a48*/
          }
        }
      }
    }
  }
  if ( a3 == (TESObjectREFR *)reference ) /*0x4b6a56*/
  {
LABEL_9:
    sub_57A8D0((char)a2, a4, a5, a6, a2, 0, 1, 0); /*0x4b6a5f*/
    return 1; /*0x4b6a6a*/
  }
  else
  {
    if ( a10 ) /*0x4b6a7d*/
      a2->vtbl->RemoveItem(a2, a10, 0, a11, 0, 0, a3, 0, 0, 1, 0); /*0x4b6a9a*/
    if ( Actor::HasNPCBaseForm((Actor *)a3) && !TESObjectREFR_IsOwnedBy(a2, a3, 1) && TESObjectREFR_GetOwner(a2) ) /*0x4b6abf*/
    {
      ((void (__thiscall *)(TESObjectREFR *))a3->vtbl[1].super.SetFromActiveFile)(a3); /*0x4b6add*/
      return 1; /*0x4b6ae2*/
    }
    else
    {
      return 1; /*0x4b67d1*/
    }
  }
}
