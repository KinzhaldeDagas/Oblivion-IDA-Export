0x992936: push    ebp
0x992937: mov     ebp, esp
0x992939: fldz
0x99293B: fcom    [ebp+arg_0]
0x99293E: fnstsw  ax
0x992940: test    ah, 44h
0x992943: jp      short loc_99294C
0x992945: xor     edx, edx
0x992947: jmp     loc_9929DE
0x99294C: xor     ecx, ecx
0x99294E: test    word ptr [ebp+arg_0+6], 7FF0h
0x992954: jnz     short loc_9929B9
0x992956: test    dword ptr [ebp+arg_0+4], 0FFFFFh
0x99295D: jnz     short loc_992964
0x99295F: cmp     dword ptr [ebp+arg_0], ecx
0x992962: jz      short loc_9929B9
0x992964: fcomp   [ebp+arg_0]
0x992967: mov     edx, 0FFFFFC03h
0x99296C: fnstsw  ax
0x99296E: test    ah, 41h
0x992971: jnz     short loc_992978
0x992973: xor     eax, eax
0x992975: inc     eax
0x992976: jmp     short loc_992990
0x992978: xor     eax, eax
0x99297A: jmp     short loc_992990
0x99297C: shl     dword ptr [ebp+arg_0+4], 1
0x99297F: test    dword ptr [ebp+arg_0], 80000000h
0x992986: jz      short loc_99298C
0x992988: or      dword ptr [ebp+arg_0+4], 1
0x99298C: shl     dword ptr [ebp+arg_0], 1
0x99298F: dec     edx
0x992990: test    byte ptr [ebp+arg_0+6], 10h
0x992994: jz      short loc_99297C
0x992996: and     word ptr [ebp+arg_0+6], 0FFEFh
0x99299C: cmp     eax, ecx
0x99299E: jz      short loc_9929A6
0x9929A0: or      word ptr [ebp+arg_0+6], 8000h
0x9929A6: fld     [ebp+arg_0]
0x9929A9: push    ecx; int
0x9929AA: push    ecx
0x9929AB: push    ecx
0x9929AC: fstp    [esp+0Ch+var_C]; double
0x9929AF: call    __set_exp
0x9929B4: add     esp, 0Ch
0x9929B7: jmp     short loc_9929DE
0x9929B9: push    ecx; int
0x9929BA: fstp    st
0x9929BC: fld     [ebp+arg_0]
0x9929BF: push    ecx
0x9929C0: push    ecx
0x9929C1: fstp    [esp+0Ch+var_C]; double
0x9929C4: call    __set_exp
0x9929C9: mov     edx, dword ptr [ebp+arg_0+6]
0x9929CC: shr     edx, 4
0x9929CF: and     edx, 7FFh
0x9929D5: add     esp, 0Ch
0x9929D8: sub     edx, 3FEh
0x9929DE: mov     eax, [ebp+arg_8]
0x9929E1: mov     [eax], edx
0x9929E3: pop     ebp
0x9929E4: retn
