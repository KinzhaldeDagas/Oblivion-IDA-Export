0x69952A: mov     edx, [ebp+0]
0x69952D: mov     eax, [edx+26Ch]
0x699533: mov     ecx, ebp
0x699535: call    eax
0x699537: fstp    qword ptr [esp+arg_18]
0x69953B: mov     edx, [ebp+0]
0x69953E: mov     eax, [edx+0ECh]
0x699544: mov     ecx, ebp
0x699546: call    eax
0x699548: fmul    qword ptr [esp+arg_18]
0x69954C: jmp     short loc_699556
0x69954E: xor     ebp, ebp
0x699550: fld     dword ptr ds:0B36F20h
0x699556: test    ebp, ebp
0x699558: fstp    [esp+arg_18]; float
0x69955C: jz      short loc_699564
0x69955E: mov     [esp+arg_8], ebp; int
0x699562: jmp     short MagicCaster_FindTouchTarget___CalcDistToPlayer??
0x699564: mov     edx, [esi]
0x699566: mov     eax, [edx+20h]
0x699569: mov     ecx, esi
0x69956B: call    eax
0x69956D: mov     [esp+arg_8], eax
