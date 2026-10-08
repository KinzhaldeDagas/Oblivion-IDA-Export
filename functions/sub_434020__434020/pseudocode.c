int __userpurge sub_434020@<eax>(
        IOManager *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        signed int a5)
{
  int v6; // edi
  int result; // eax
  int v8; // ebx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // ebp
  int v14; // ecx
  bool v15; // zf
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // ebx
  unsigned int v19; // eax
  int v20; // edx
  int v21; // edi
  unsigned int v22; // [esp+14h] [ebp-Ch]
  float v23; // [esp+18h] [ebp-8h]
  unsigned int v24; // [esp+1Ch] [ebp-4h]
  float v25; // [esp+24h] [ebp+4h]

  if ( (*((int (__usercall **)@<eax>(IOManager *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl + 0xE))( /*0x434057*/
         this,
         st7_0,
         a3,
         a2)
    || (*((int (__thiscall **)(LockFreeQueue_NiIOTask *))this->members.taskQueue->vtbl + 3))(this->members.taskQueue)
    || (v6 = *((_DWORD *)MEMORY[0xB33A1C] + 6),
        (result = *(_DWORD *)(v6 + 0x24)
                + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 0x28) + 0xC))(*(_DWORD *)(v6 + 0x28))) != 0) )
  {
    this->members.unk38 = a5; /*0x434068*/
    sub_433A40((volatile LONG *)this, a5, 0); /*0x43406b*/
    v8 = 0; /*0x434074*/
    v9 = 0; /*0x434076*/
    v24 = 3 * a5 + 2; /*0x434078*/
    do /*0x43408d*/
    {
      v10 = *((_DWORD *)this->members.super.unk2C + v9++); /*0x434083*/
      v8 += v10; /*0x434089*/
    }
    while ( v9 <= 3 * a5 + 2 ); /*0x43408d*/
    v11 = (*((int (__thiscall **)(LockFreeQueue_NiIOTask *))this->members.taskQueue->vtbl + 3))(this->members.taskQueue); /*0x434097*/
    v12 = *((_DWORD *)MEMORY[0xB33A1C] + 6); /*0x43409f*/
    v13 = v11; /*0x4340a7*/
    v14 = v8 /*0x4340b3*/
        + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v12 + 0x28) + 0xC))(*(_DWORD *)(v12 + 0x28))
        + *(_DWORD *)(v12 + 0x24);
    v15 = v13 + v14 == 0; /*0x4340b5*/
    v16 = v13 + v14; /*0x4340b5*/
    v22 = v16; /*0x4340b7*/
    result = v16; /*0x4340bb*/
    if ( !v15 ) /*0x4340bd*/
    {
      v23 = (float)v16; /*0x4340d7*/
      while ( 1 ) /*0x434113*/
      {
        v25 = (double)(v16 - result) / v23 * 100.0; /*0x434108*/
        if ( sub_45A500(g_TESSaveLoadGame) && (g_TESSaveLoadGame->flags & 0x800) != 0 ) /*0x434123*/
          sub_4523A0(v13, a2, a3, v25, 2, v25); /*0x43412f*/
        else
          sub_57B950(v13, a2, a3, 2, v25); /*0x434140*/
        v17 = (*((int (__thiscall **)(IOManager *))this->vtbl + 0xE))(this); /*0x43414f*/
        if ( v17 > (*((int (__thiscall **)(LockFreeQueue_NiIOTask *))this->members.taskQueue->vtbl + 3))(this->members.taskQueue) ) /*0x43415f*/
          Sleep(0x32u); /*0x434163*/
        IOManager_ProcessThreads(this); /*0x43416b*/
        v18 = 0; /*0x434170*/
        v19 = 0; /*0x434172*/
        do /*0x434183*/
        {
          v20 = *((_DWORD *)this->members.super.unk2C + v19++); /*0x434177*/
          v18 += v20; /*0x43417d*/
        }
        while ( v19 <= v24 ); /*0x434183*/
        v13 = (*((int (__thiscall **)(LockFreeQueue_NiIOTask *))this->members.taskQueue->vtbl + 3))(this->members.taskQueue); /*0x43418f*/
        v21 = *((_DWORD *)MEMORY[0xB33A1C] + 6); /*0x434196*/
        result = v13 /*0x4341ac*/
               + v18
               + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v21 + 0x28) + 0xC))(*(_DWORD *)(v21 + 0x28))
               + *(_DWORD *)(v21 + 0x24);
        if ( !result ) /*0x4341ae*/
          break; /*0x4341ae*/
        v16 = v22; /*0x4340e0*/
      }
    }
  }
  this->members.unk38 = 6; /*0x4341b7*/
  return result; /*0x4341b6*/
}
