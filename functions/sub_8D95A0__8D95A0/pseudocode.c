int __thiscall sub_8D95A0(
        int (__stdcall ***this)(char),
        hkBroadPhase *a2,
        hkWorldRayCastInput *a3,
        hkCollisionFilter *a4,
        int a5,
        hkWorldRayCastOutput *a6)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // esi
  unsigned __int64 v11; // rax
  int (__stdcall **v12)(char); // edx
  hkVector4 From; // xmm0
  int v14; // edx
  unsigned __int64 v15; // rax
  int v16; // esi
  _DWORD *v17; // ecx
  hkVector4 v19; // [esp+10h] [ebp-20h] BYREF
  int v20; // [esp+20h] [ebp-10h]
  hkVector4 *p_To; // [esp+24h] [ebp-Ch]
  int v22; // [esp+28h] [ebp-8h]
  int v23; // [esp+2Ch] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d95aa*/
  v7 = MEMORY[0xBA9DE4]; /*0x8d95b2*/
  v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d95b8*/
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x8d95c8*/
  {
    v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d95ca*/
    v10 = *(_DWORD **)(v8 + 0x1A4); /*0x8d95cc*/
    *v10 = "TtRayCstCchSim"; /*0x8d95d2*/
    v11 = __rdtsc(); /*0x8d95d8*/
    v10[1] = v11; /*0x8d95e2*/
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3; /*0x8d95e8*/
    v7 = MEMORY[0xBA9DE4]; /*0x8d95ee*/
  }
  *(this + 1) = (int (__stdcall **)(char))a3; /*0x8d95ff*/
  *(this + 3) = (int (__stdcall **)(char))a6; /*0x8d9602*/
  if ( a4 ) /*0x8d9605*/
    v12 = (int (__stdcall **)(char))((char *)a4 + 0x14); /*0x8d9607*/
  else
    v12 = 0; /*0x8d960c*/
  *(this + 2) = v12; /*0x8d960e*/
  if ( a3->EnableShapeCollectionFilter ) /*0x8d9611*/
  {
    if ( a4 ) /*0x8d961a*/
      *(this + 0xD) = (int (__stdcall **)(char))((char *)a4 + 0x10); /*0x8d961f*/
    else
      *(this + 0xD) = 0; /*0x8d9626*/
  }
  else
  {
    *(this + 0xD) = 0; /*0x8d962b*/
  }
  From = a3->From; /*0x8d9632*/
  p_To = &a3->To; /*0x8d9638*/
  v23 = a5; /*0x8d9642*/
  v14 = *(_DWORD *)a2; /*0x8d9649*/
  v20 = 1; /*0x8d9652*/
  v22 = 0x10; /*0x8d965a*/
  v19 = From; /*0x8d9662*/
  (*(void (__thiscall **)(hkBroadPhase *, hkVector4 *, int (__stdcall ***)(char), _DWORD))(v14 + 0x38))( /*0x8d9667*/
    a2,
    &v19,
    this,
    0);
  LODWORD(v15) = ThreadLocalStoragePointer[v7]; /*0x8d966a*/
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x8d9679*/
  {
    v16 = ThreadLocalStoragePointer[v7]; /*0x8d967b*/
    v17 = *(_DWORD **)(v15 + 0x1A4); /*0x8d967d*/
    *v17 = "Et"; /*0x8d9683*/
    v15 = __rdtsc(); /*0x8d9689*/
    v17[1] = v15; /*0x8d9693*/
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3; /*0x8d9699*/
  }
  return v15; /*0x8d969f*/
}
