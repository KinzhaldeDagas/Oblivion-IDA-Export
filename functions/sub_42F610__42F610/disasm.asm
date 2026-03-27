0x42F610: sub     esp, 448h
0x42F616: mov     eax, ___security_cookie
0x42F61B: xor     eax, esp
0x42F61D: mov     [esp+448h+var_4], eax
0x42F624: push    48h ; 'H'
0x42F626: push    0
0x42F628: push    offset FirstLoadedArchiveByType
0x42F62D: call    __memset
0x42F632: add     esp, 0Ch
0x42F635: cmp     bUseArchives_Archive, 0
0x42F63C: mov     [esp+448h+var_445], 1
0x42F641: jnz     short loc_42F65A
0x42F643: mov     al, 1
0x42F645: mov     ecx, [esp+448h+var_4]
0x42F64C: xor     ecx, esp
0x42F64E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42F653: add     esp, 448h
0x42F659: retn
0x42F65A: mov     eax, sInvalidationFile_Archive
0x42F65F: push    ebx
0x42F660: push    ebp
0x42F661: push    esi
0x42F662: push    edi; ArgList
0x42F663: push    eax
0x42F664: call    ArchiveManager_ReadArchiveInvalidationTXTFile
0x42F669: add     esp, 4
0x42F66C: xor     edi, edi
0x42F66E: mov     [esp+458h+var_43C], edi
0x42F672: jmp     short loc_42F678
0x42F674: mov     edi, [esp+458h+var_43C]
0x42F678: lea     esi, [edi+1]
0x42F67B: cmp     esi, 18h
0x42F67E: mov     [esp+458h+var_444], esi
0x42F682: jnb     short loc_42F6FF
0x42F684: lea     ebx, ds:0[edi*8]
0x42F68B: mov     [esp+458h+var_440], ebx
0x42F68F: nop
0x42F690: lea     ecx, FileExtensionInfoList[ebx]
0x42F696: lea     ebp, ds:0[esi*8]
0x42F69D: push    ecx; Str2
0x42F69E: lea     edx, FileExtensionInfoList[ebp]
0x42F6A4: push    edx; Str1
0x42F6A5: call    __strcmp
0x42F6AA: add     esp, 8
0x42F6AD: test    eax, eax
0x42F6AF: jge     short loc_42F6B5
0x42F6B1: mov     edi, esi
0x42F6B3: mov     ebx, ebp
0x42F6B5: add     esi, 1
0x42F6B8: cmp     esi, 18h
0x42F6BB: jb      short loc_42F690
0x42F6BD: cmp     [esp+458h+var_43C], edi
0x42F6C1: jz      short loc_42F6FB
0x42F6C3: mov     eax, [esp+458h+var_440]
0x42F6C7: mov     esi, FileExtensionInfoList[edi*8]
0x42F6CE: mov     ecx, FileExtensionInfoList[eax]
0x42F6D4: mov     edx, dword_B0436C[eax]
0x42F6DA: mov     FileExtensionInfoList[eax], esi
0x42F6E0: mov     esi, dword_B0436C[edi*8]
0x42F6E7: mov     dword_B0436C[eax], esi
0x42F6ED: mov     FileExtensionInfoList[edi*8], ecx
0x42F6F4: mov     dword_B0436C[edi*8], edx
0x42F6FB: mov     esi, [esp+458h+var_444]
0x42F6FF: cmp     esi, 17h
0x42F702: mov     [esp+458h+var_43C], esi
0x42F706: jl      loc_42F674
0x42F70C: call    ds:GetTickCount
0x42F712: push    offset aLoadingMasterA; "Loading master archives"
0x42F717: mov     [esp+45Ch+var_440], eax
0x42F71B: call    PrintToLog???
0x42F720: add     esp, 4
0x42F723: push    1
0x42F725: push    8000h
0x42F72A: mov     ecx, offset FormHeap
0x42F72F: call    j_MemoryHeap_Alloc
0x42F734: mov     ecx, sArchiveList_Archive
0x42F73A: mov     ebp, eax
0x42F73C: mov     edx, ebp
0x42F73E: mov     edi, edi
0x42F740: mov     al, [ecx]
0x42F742: mov     [edx], al
0x42F744: add     ecx, 1
0x42F747: add     edx, 1
0x42F74A: test    al, al
0x42F74C: jnz     short loc_42F740
0x42F74E: push    offset AppDataPath
0x42F753: lea     eax, [esp+45Ch+Filename]
0x42F75A: push    offset aSplugins_txt; "%sPlugins.txt"
0x42F75F: push    eax
0x42F760: call    __sprintf
0x42F765: lea     ecx, [esp+464h+Filename]
0x42F76C: push    offset Mode; "r"
0x42F771: push    ecx; Filename
0x42F772: call    _fopen
0x42F777: mov     esi, eax
0x42F779: add     esp, 14h
0x42F77C: test    esi, esi
0x42F77E: mov     [esp+458h+var_444], esi
0x42F782: jz      loc_42F933
0x42F788: push    esi; File
0x42F789: call    _feof
0x42F78E: add     esp, 4
0x42F791: test    eax, eax
0x42F793: jnz     loc_42F933
0x42F799: lea     esp, [esp+0]
0x42F7A0: push    esi; File
0x42F7A1: lea     edx, [esp+45Ch+Buf]
0x42F7A8: push    104h; MaxCount
0x42F7AD: push    edx; Buf
0x42F7AE: call    _fgets
0x42F7B3: mov     al, [esp+464h+Buf]
0x42F7BA: add     esp, 0Ch
0x42F7BD: cmp     al, 23h ; '#'
0x42F7BF: jz      loc_42F922
0x42F7C5: test    al, al
0x42F7C7: jz      loc_42F922
0x42F7CD: cmp     al, 0Ah
0x42F7CF: jz      loc_42F922
0x42F7D5: lea     eax, [esp+458h+Buf]
0x42F7DC: push    offset a_esp_0; ".esp"
0x42F7E1: push    eax; Str
0x42F7E2: call    _strstr
0x42F7E7: add     esp, 8
0x42F7EA: test    eax, eax
0x42F7EC: jz      loc_42F922
0x42F7F2: mov     ecx, ds:dword_A36134
0x42F7F8: mov     [eax], ecx
0x42F7FA: mov     dx, ds:word_A36138
0x42F801: mov     [eax+4], dx
0x42F805: mov     eax, dword ptr ds:aData; "Data\\"
0x42F80A: mov     cx, word ptr ds:aData+4; "\\"
0x42F811: mov     dword ptr [esp+458h+FileName], eax
0x42F818: lea     eax, [esp+458h+Buf]
0x42F81F: mov     [esp+458h+var_30C], cx
0x42F827: mov     edx, eax
0x42F829: lea     esp, [esp+0]
0x42F830: mov     cl, [eax]
0x42F832: add     eax, 1
0x42F835: test    cl, cl
0x42F837: jnz     short loc_42F830
0x42F839: lea     edi, [esp+458h+FileName]
0x42F840: sub     eax, edx
0x42F842: add     edi, 0FFFFFFFFh
0x42F845: mov     cl, [edi+1]
0x42F848: add     edi, 1
0x42F84B: test    cl, cl
0x42F84D: jnz     short loc_42F845
0x42F84F: mov     ecx, eax
0x42F851: shr     ecx, 2
0x42F854: mov     esi, edx
0x42F856: rep movsd
0x42F858: mov     ecx, eax
0x42F85A: lea     edx, [esp+458h+var_438]
0x42F85E: push    edx; int
0x42F85F: lea     eax, [esp+45Ch+FileName]
0x42F866: and     ecx, 3
0x42F869: push    eax; lpFileName
0x42F86A: rep movsb
0x42F86C: call    __findfirst64i32
0x42F871: mov     ebx, eax
0x42F873: add     esp, 8
0x42F876: cmp     ebx, 0FFFFFFFFh
0x42F879: jz      loc_42F91E
0x42F87F: nop
0x42F880: mov     eax, ebp
0x42F882: lea     edx, [eax+1]
0x42F885: mov     cl, [eax]
0x42F887: add     eax, 1
0x42F88A: test    cl, cl
0x42F88C: jnz     short loc_42F885
0x42F88E: sub     eax, edx
0x42F890: cmp     byte ptr [eax+ebp-2], 0Ah
0x42F895: jnz     short loc_42F8AF
0x42F897: mov     eax, ebp
0x42F899: lea     edx, [eax+1]
0x42F89C: lea     esp, [esp+0]
0x42F8A0: mov     cl, [eax]
0x42F8A2: add     eax, 1
0x42F8A5: test    cl, cl
0x42F8A7: jnz     short loc_42F8A0
0x42F8A9: sub     eax, edx
0x42F8AB: mov     [eax+ebp-2], cl
0x42F8AF: mov     eax, ebp
0x42F8B1: add     eax, 0FFFFFFFFh
0x42F8B4: mov     cl, [eax+1]
0x42F8B7: add     eax, 1
0x42F8BA: test    cl, cl
0x42F8BC: jnz     short loc_42F8B4
0x42F8BE: mov     cx, ds:word_A36130
0x42F8C5: mov     [eax], cx
0x42F8C8: mov     dl, ds:byte_A36132
0x42F8CE: mov     [eax+2], dl
0x42F8D1: lea     eax, [esp+458h+var_414]
0x42F8D5: mov     ecx, eax
0x42F8D7: mov     dl, [eax]
0x42F8D9: add     eax, 1
0x42F8DC: test    dl, dl
0x42F8DE: jnz     short loc_42F8D7
0x42F8E0: mov     edi, ebp
0x42F8E2: sub     eax, ecx
0x42F8E4: mov     esi, ecx
0x42F8E6: add     edi, 0FFFFFFFFh
0x42F8E9: lea     esp, [esp+0]
0x42F8F0: mov     cl, [edi+1]
0x42F8F3: add     edi, 1
0x42F8F6: test    cl, cl
0x42F8F8: jnz     short loc_42F8F0
0x42F8FA: mov     ecx, eax
0x42F8FC: shr     ecx, 2
0x42F8FF: rep movsd
0x42F901: mov     ecx, eax
0x42F903: lea     eax, [esp+458h+var_438]
0x42F907: push    eax; int
0x42F908: and     ecx, 3
0x42F90B: push    ebx; hFindFile
0x42F90C: rep movsb
0x42F90E: call    __findnext64i32
0x42F913: add     esp, 8
0x42F916: test    eax, eax
0x42F918: jz      loc_42F880
0x42F91E: mov     esi, [esp+458h+var_444]
0x42F922: push    esi; File
0x42F923: call    _feof
0x42F928: add     esp, 4
0x42F92B: test    eax, eax
0x42F92D: jz      loc_42F7A0
0x42F933: push    offset byte_A319FC; unsigned __int8 *
0x42F938: push    ebp; unsigned __int8 *
0x42F939: call    __mbstok
0x42F93E: add     esp, 8
0x42F941: test    eax, eax
0x42F943: jz      short loc_42F9B3
0x42F945: mov     ecx, eax
0x42F947: mov     al, [ecx]
0x42F949: cmp     al, 20h ; ' '
0x42F94B: jz      short loc_42F955
0x42F94D: cmp     al, 9
0x42F94F: jz      short loc_42F955
0x42F951: cmp     al, 0Ah
0x42F953: jnz     short loc_42F95A
0x42F955: add     ecx, 1
0x42F958: jmp     short loc_42F947
0x42F95A: push    0
0x42F95C: push    0
0x42F95E: push    ecx
0x42F95F: call    ArchiveManager_LoadArchive
0x42F964: add     esp, 0Ch
0x42F967: test    eax, eax
0x42F969: jz      short loc_42F99B
0x42F96B: xor     ecx, ecx
0x42F96D: lea     ecx, [ecx+0]
0x42F970: mov     edx, 1
0x42F975: shl     edx, cl
0x42F977: test    [eax+174h], dx
0x42F97E: jz      short loc_42F991
0x42F980: cmp     FirstLoadedArchiveByType[ecx*4], 0
0x42F988: jnz     short loc_42F991
0x42F98A: mov     FirstLoadedArchiveByType[ecx*4], eax
0x42F991: add     ecx, 1
0x42F994: cmp     ecx, 9
0x42F997: jl      short loc_42F970
0x42F999: jmp     short loc_42F9A0
0x42F99B: mov     [esp+458h+var_445], 0
0x42F9A0: push    offset byte_A319FC; unsigned __int8 *
0x42F9A5: push    0; unsigned __int8 *
0x42F9A7: call    __mbstok
0x42F9AC: add     esp, 8
0x42F9AF: test    eax, eax
0x42F9B1: jnz     short loc_42F945
0x42F9B3: push    ebp; void *
0x42F9B4: mov     ecx, offset FormHeap
0x42F9B9: call    MemoryHeap_Free_checked
0x42F9BE: call    ds:GetTickCount
0x42F9C4: sub     eax, [esp+458h+var_440]
0x42F9C8: test    eax, eax
0x42F9CA: mov     [esp+458h+var_440], eax
0x42F9CE: fild    [esp+458h+var_440]
0x42F9D2: jge     short loc_42F9DA
0x42F9D4: fadd    ds:flt_A2FC78
0x42F9DA: fdiv    ds:dbl_A2FC70
0x42F9E0: sub     esp, 8
0x42F9E3: fstp    qword ptr [esp+460h+ArgList]; ArgList
0x42F9E6: push    offset aFinishedLoad_0; "Finished loading master archives in %f "...
0x42F9EB: call    PrintToLog???
0x42F9F0: mov     ecx, [esp+464h+var_4]
0x42F9F7: mov     al, [esp+464h+var_445]
0x42F9FB: add     esp, 0Ch
0x42F9FE: pop     edi
0x42F9FF: pop     esi
0x42FA00: pop     ebp
0x42FA01: pop     ebx
0x42FA02: xor     ecx, esp
0x42FA04: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42FA09: add     esp, 448h
0x42FA0F: retn
