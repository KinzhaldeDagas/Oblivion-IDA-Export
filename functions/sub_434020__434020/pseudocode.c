unsigned int __userpurge sub_434020@<eax>(
        IOManager *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        signed int a5)
{
  int v6; // edi
  unsigned int result; // eax
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

  if ( (*((int (__usercall **)@<eax>(IOManager *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl + 0xE))(
         this,
         st7_0,
         a3,
         a2)
    || (*((int (__thiscall **)(LockFreeQueue_NiIOTask *))this->members.taskQueue->vtbl + 3))(this->members.taskQueue)
    || (v6 = *((_DWORD *)ModelLoaderPtr + 6),
        (result = *(_DWORD *)(v6 + 0x24)
                + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 0x28) + 0xC))(*(_DWORD *)(v6 + 0x28))) != 0) )
  {
    this->members.unk38 = a5;
    sub_433A40((volatile LONG *)this, a5, 0);
    v8 = 0;
    v9 = 0;
    v24 = 3 * a5 + 2;
    do
    {
      v10 = *((_DWORD *)this->members.super.unk2C + v9++);
      v8 += v10;
    }
    while ( v9 <= 3 * a5 + 2 );
    v11 = (*((int (__thiscall **)(LockFreeQueue_NiIOTask *))this->members.taskQueue->vtbl + 3))(this->members.taskQueue);
    v12 = *((_DWORD *)ModelLoaderPtr + 6);
    v13 = v11;
    v14 = v8
        + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v12 + 0x28) + 0xC))(*(_DWORD *)(v12 + 0x28))
        + *(_DWORD *)(v12 + 0x24);
    v15 = v13 + v14 == 0;
    v16 = v13 + v14;
    v22 = v16;
    result = v16;
    if ( !v15 )
    {
      v23 = (float)v16;
      while ( 1 )
      {
        v25 = (double)(v16 - result) / v23 * 100.0;
        if ( sub_45A500(SaveLoad_CurrentSavegame) && (SaveLoad_CurrentSavegame->flags & 0x800) != 0 )
          sub_4523A0(v13, a2, a3, v25, 2, v25);
        else
          sub_57B950(v13, a2, a3, v25, 2, v25);
        v17 = (*((int (__thiscall **)(IOManager *))this->vtbl + 0xE))(this);
        if ( v17 > (*((int (__thiscall **)(LockFreeQueue_NiIOTask *))this->members.taskQueue->vtbl + 3))(this->members.taskQueue) )
          Sleep(0x32u);
        IOManager_ProcessThreads(this);
        v18 = 0;
        v19 = 0;
        do
        {
          v20 = *((_DWORD *)this->members.super.unk2C + v19++);
          v18 += v20;
        }
        while ( v19 <= v24 );
        v13 = (*((int (__thiscall **)(LockFreeQueue_NiIOTask *))this->members.taskQueue->vtbl + 3))(this->members.taskQueue);
        v21 = *((_DWORD *)ModelLoaderPtr + 6);
        result = v13
               + v18
               + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v21 + 0x28) + 0xC))(*(_DWORD *)(v21 + 0x28))
               + *(_DWORD *)(v21 + 0x24);
        if ( !result )
          break;
        v16 = v22;
      }
    }
  }
  this->members.unk38 = 6;
  return result;
}
