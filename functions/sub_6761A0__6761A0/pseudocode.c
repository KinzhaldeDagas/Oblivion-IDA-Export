void __thiscall sub_6761A0(char *this, _DWORD ***a2, _DWORD *a3)
{
  int FollowerExtra; // eax
  _DWORD *i; // ebx
  _DWORD ***v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  Actor *j; // ebx
  Actor *vtbl; // esi
  _DWORD ***v10; // eax
  Actor **v11; // eax

  FollowerExtra = ExtraDataList_GetFollowerExtra(); /*0x6761af*/
  if ( FollowerExtra ) /*0x6761ba*/
  {
    for ( i = *(_DWORD **)(FollowerExtra + 0xC); i; i = (_DWORD *)i[1] ) /*0x6761c1*/
    {
      if ( !i[1] && !*i ) /*0x6761c9*/
        break; /*0x6761cc*/
      v5 = (_DWORD ***)*i; /*0x6761d0*/
      v6 = a3; /*0x6761d2*/
      if ( a3 ) /*0x6761d4*/
      {
        while ( (_DWORD ***)*v6 != v5 ) /*0x6761d8*/
        {
          v6 = (_DWORD *)v6[1]; /*0x6761da*/
          if ( !v6 ) /*0x6761df*/
            goto LABEL_8; /*0x6761df*/
        }
      }
      else
      {
LABEL_8:
        if ( v5 ) /*0x6761e3*/
        {
          if ( *a3 ) /*0x6761e5*/
          {
            v7 = (_DWORD *)FormHeapAlloc(8u); /*0x6761ec*/
            if ( v7 ) /*0x6761f6*/
            {
              *v7 = *a3; /*0x6761fa*/
              v7[1] = 0; /*0x6761fc*/
            }
            else
            {
              v7 = 0; /*0x676205*/
            }
            v7[1] = a3[1]; /*0x67620a*/
            a3[1] = v7; /*0x67620d*/
          }
          *a3 = v5; /*0x676210*/
        }
        sub_6761A0(this, v5, a3); /*0x676218*/
      }
    }
  }
  for ( j = ActorList_ReturnHead((ActorList *)(this + 0x68)); j; j = *(Actor **)&j->members.super.super.super.type ) /*0x676234*/
  {
    if ( !j->vtbl ) /*0x676236*/
      break; /*0x67623a*/
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))j->vtbl->super.super.super.super.InitializeComponent + 0x64))(j->vtbl) ) /*0x676244*/
    {
      vtbl = (Actor *)j->vtbl; /*0x67624a*/
      if ( Actor::GetCurrentPackage((Actor *)j->vtbl) ) /*0x67624e*/
      {
        if ( Actor::GetCurrentPackage(vtbl)->members.type == kPackageType_Escort /*0x67626f*/
          || Actor::GetCurrentPackage(vtbl)->members.type == kPackageType_Accompany )
        {
          sub_5E2E00(vtbl); /*0x676273*/
          if ( v10 == a2 ) /*0x67627c*/
          {
            v11 = (Actor **)a3; /*0x676280*/
            if ( a3 ) /*0x676282*/
            {
              while ( *v11 != vtbl ) /*0x676286*/
              {
                v11 = (Actor **)v11[1]; /*0x676288*/
                if ( !v11 ) /*0x67628d*/
                  goto LABEL_27; /*0x67628d*/
              }
            }
            else
            {
LABEL_27:
              BSSimpleList_PushFront(a3, (int)vtbl); /*0x67628f*/
              sub_6761A0(this, vtbl, a3); /*0x67629d*/
            }
          }
        }
      }
    }
  }
}
