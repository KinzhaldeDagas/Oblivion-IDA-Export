// Verified (Oblivion): loads base hit-effect data, optionally starts an I/O task using the owner ActiveEffect's model path, then reads a 16-bit length and allocates/stores that many payload bytes at object +0x2C. The payload's precise in-memory semantic type remains Candidate.
unsigned __int16 __userpurge MagicModelHitEffect_LoadExtraData@<ax>(
        MagicHitEffect *this@<ecx>,
        char a2@<bpl>,
        ActiveEffect *ownerActiveEffect,
        TESObjectREFR *Dst)
{
  ActiveEffect *v4; // esi
  const char *v6; // eax
  ActiveEffect *v7; // esi
  unsigned __int16 result; // ax
  FreeEntry *v9; // esi
  size_t v10; // [esp-8h] [ebp-10h]
  int v11; // [esp+0h] [ebp-8h]

  v4 = ownerActiveEffect; /*0x69e735*/
  MagicHitEffect_LoadExtraData(this, ownerActiveEffect, Dst); /*0x69e73e*/
  if ( v4 ) /*0x69e745*/
  {
    if ( v4->members.effectItem->setting->model.vtbl->GetModelPath(&v4->members.effectItem->setting->model) ) /*0x69e756*/
    {
      v6 = v4->members.effectItem->setting->model.vtbl->GetModelPath(&v4->members.effectItem->setting->model); /*0x69e777*/
      sub_43B420((int *)MEMORY[0xB33A1C], (IOTask **)&ownerActiveEffect, v6, 5u, 0, 0, 0, 1, 0); /*0x69e785*/
      if ( ownerActiveEffect ) /*0x69e790*/
      {
        v7 = ownerActiveEffect; /*0x69e792*/
        if ( !InterlockedDecrement((volatile LONG *)&ownerActiveEffect->members.item) ) /*0x69e798*/
          ((void (__thiscall *)(ActiveEffect *, int))v7->vtbl->scalarDeletingDestructor)(v7, 1); /*0x69e7ae*/
      }
    }
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 2u); /*0x69e7bd*/
  result = (unsigned __int16)Dst; /*0x69e7c2*/
  if ( (_WORD)Dst ) /*0x69e7ca*/
  {
    HIDWORD(v10) = 1; /*0x69e7d2*/
    LODWORD(v10) = (unsigned __int16)Dst + 2; /*0x69e7d4*/
    v9 = j_MemoryHeap_Alloc(&FormHeap, a2, v10, v11); /*0x69e7e4*/
    LOWORD(v9->prev) = (_WORD)Dst; /*0x69e7e6*/
    result = (unsigned __int16)SaveLoad_LoadData(g_TESSaveLoadGame, (char *)&v9->prev + 2, (unsigned __int16)Dst); /*0x69e7f9*/
    *((_DWORD *)this + 0xB) = v9; /*0x69e7fe*/
  }
  return result; /*0x69e801*/
}
