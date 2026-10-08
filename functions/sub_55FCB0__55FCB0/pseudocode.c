// Refresh cached tree model distance parameters across singleton tree cache using fTreeNearDistanceBase and flt_B39E10.
void sub_55FCB0()
{
  NiTMap_TESCELL **v0; // esi
  NiTMap_TESCELL *v1; // ecx
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edi
  NiTMap_Entry_TESCELL **v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  float *v7; // eax
  float *v8; // eax
  unsigned int (__thiscall *CompareTo)(BaseFormComponent *, BaseFormComponent *); // eax
  double v10; // st7
  float farDistance; // [esp+4h] [ebp-28h]
  NiTMap_Entry_TESCELL *v12; // [esp+14h] [ebp-18h] BYREF
  TESObjectCELL *v13; // [esp+18h] [ebp-14h] BYREF
  float nearDistance; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v15; // [esp+28h] [ebp-4h]

  v0 = (NiTMap_TESCELL **)g_BSTreeManager_Instance; /*0x55fcd5*/
  if ( !g_BSTreeManager_Instance ) /*0x55fcd5*/
  {
    BSTreeManager_Create(0); /*0x55fce0*/
    v0 = (NiTMap_TESCELL **)g_BSTreeManager_Instance; /*0x55fce5*/
  }
  v1 = *v0; /*0x55fcee*/
  if ( *v0 ) /*0x55fcee*/
  {
    m_numBuckets = v1->m_numBuckets; /*0x55fcf8*/
    v3 = 0; /*0x55fcfb*/
    if ( m_numBuckets ) /*0x55fcff*/
    {
      m_buckets = v1->m_buckets; /*0x55fd01*/
      v5 = m_buckets; /*0x55fd04*/
      while ( !*v5 ) /*0x55fd09*/
      {
        ++v3; /*0x55fd0b*/
        ++v5; /*0x55fd0e*/
        if ( v3 >= m_numBuckets ) /*0x55fd13*/
          goto LABEL_8; /*0x55fd13*/
      }
      v6 = m_buckets[v3]; /*0x55fd28*/
    }
    else
    {
LABEL_8:
      v6 = 0; /*0x55fd15*/
    }
    v12 = v6; /*0x55fd19*/
    if ( v6 ) /*0x55fd1d*/
    {
      while ( 1 ) /*0x55fd36*/
      {
        if ( !v0 ) /*0x55fd38*/
        {
          *(float *)&v7 = COERCE_FLOAT(FormHeapAlloc(0x28u)); /*0x55fd3c*/
          nearDistance = *(float *)&v7; /*0x55fd44*/
          v15 = 0; /*0x55fd4a*/
          if ( *(float *)&v7 == 0.0 ) /*0x55fd4e*/
            v8 = 0; /*0x55fd59*/
          else
            v8 = BSTreeManager_ctor(v7); /*0x55fd52*/
          v0 = (NiTMap_TESCELL **)v8; /*0x55fd5b*/
          v15 = 0xFFFFFFFF; /*0x55fd5d*/
          g_BSTreeManager_Instance = v8; /*0x55fd61*/
        }
        NiTMap_U32Pointer_GetNextEntry(*v0, &v12, (void **)&nearDistance, &v13); /*0x55fd78*/
        if ( v13 ) /*0x55fd83*/
        {
          if ( v13->vtbl ) /*0x55fd85*/
          {
            CompareTo = v13->vtbl->super.CompareTo; /*0x55fd8b*/
            if ( CompareTo ) /*0x55fd90*/
            {
              v10 = flt_B0760C; /*0x55fd92*/
              nearDistance = v10 * fTreeFarDistanceBase; /*0x55fda5*/
              farDistance = nearDistance; /*0x55fdad*/
              nearDistance = v10 * fTreeNearDistanceBase; /*0x55fdb7*/
              CSpeedTreeRT__SetLodLimits((OB_CSpeedTreeRT_010201A0 *)CompareTo, nearDistance, farDistance); /*0x55fdc2*/
            }
          }
        }
        if ( !v12 ) /*0x55fdcc*/
          break; /*0x55fdcc*/
        v0 = (NiTMap_TESCELL **)g_BSTreeManager_Instance; /*0x55fd30*/
      }
    }
  }
}
