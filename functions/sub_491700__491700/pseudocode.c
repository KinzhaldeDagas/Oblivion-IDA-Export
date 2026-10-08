void __userpurge sub_491700(
        float *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        signed int a6,
        TESForm *a7)
{
  TESObjectREFR *v8; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // esi
  TESForm *type; // edi
  _DWORD *v12; // esi

  v8 = *((TESObjectREFR **)this + 1); /*0x491703*/
  if ( v8 ) /*0x49170a*/
    Container = TESObjectREFR_GetContainer(v8); /*0x49170c*/
  else
    Container = 0; /*0x491713*/
  p_list = &Container->list; /*0x491715*/
  if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x49171a*/
  {
    while ( p_list->next || p_list->data ) /*0x491729*/
    {
      type = p_list->data->type; /*0x49172d*/
      if ( type && sub_469980((int)p_list->data->type) ) /*0x491735*/
      {
LABEL_17:
        ContainerExtraData_RemoveForm((int ***)this, st5_0, a4, st6_0, a5, type, 0, a6, 0, 0, a7, 0, 0, 1, 0); /*0x4917ab*/
        return; /*0x4917cb*/
      }
      p_list = p_list->next; /*0x491741*/
      if ( !p_list ) /*0x491746*/
        break; /*0x491746*/
    }
  }
  v12 = *(_DWORD **)this; /*0x491748*/
  if ( *(_DWORD *)this ) /*0x491748*/
  {
    while ( v12[1] || *v12 ) /*0x49175b*/
    {
      type = *(TESForm **)(*v12 + 8); /*0x49175f*/
      if ( type && sub_469980(*(_DWORD *)(*v12 + 8)) ) /*0x491767*/
        goto LABEL_17; /*0x491771*/
      v12 = (_DWORD *)v12[1]; /*0x491773*/
      if ( !v12 ) /*0x491778*/
        return; /*0x491778*/
    }
  }
}
