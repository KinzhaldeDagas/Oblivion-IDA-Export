0x9F54D0: push    0FFFFFFFFh
0x9F54D2: push    offset SEH_9F54D0
0x9F54D7: mov     eax, large fs:0
0x9F54DD: push    eax
0x9F54DE: push    ecx
0x9F54DF: push    esi
0x9F54E0: mov     eax, ___security_cookie
0x9F54E5: xor     eax, esp
0x9F54E7: push    eax
0x9F54E8: lea     eax, [esp+18h+var_C]
0x9F54EC: mov     large fs:0, eax
0x9F54F2: push    8; Size
0x9F54F4: call    FormHeapAlloc
0x9F54F9: add     esp, 4
0x9F54FC: mov     [esp+18h+var_10], eax
0x9F5500: test    eax, eax
0x9F5502: mov     [esp+18h+var_4], 0
0x9F550A: jz      short loc_9F551F
0x9F550C: push    offset aLButton
0x9F5511: push    offset aSmouseleftbutt
0x9F5516: mov     ecx, eax; self
0x9F5518: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F551D: jmp     short loc_9F5521
0x9F551F: xor     eax, eax
0x9F5521: or      esi, 0FFFFFFFFh
0x9F5524: push    8; Size
0x9F5526: mov     [esp+1Ch+var_4], esi
0x9F552A: mov     dword ptr unk_B39554, eax
0x9F552F: call    FormHeapAlloc
0x9F5534: add     esp, 4
0x9F5537: mov     [esp+18h+var_10], eax
0x9F553B: test    eax, eax
0x9F553D: mov     [esp+18h+var_4], 1
0x9F5545: jz      short loc_9F555A
0x9F5547: push    offset aRButton
0x9F554C: push    offset aSmouserightbut
0x9F5551: mov     ecx, eax; self
0x9F5553: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F5558: jmp     short loc_9F555C
0x9F555A: xor     eax, eax
0x9F555C: push    8; Size
0x9F555E: mov     [esp+1Ch+var_4], esi
0x9F5562: mov     dword ptr unk_B39558, eax
0x9F5567: call    FormHeapAlloc
0x9F556C: add     esp, 4
0x9F556F: mov     [esp+18h+var_10], eax
0x9F5573: test    eax, eax
0x9F5575: mov     [esp+18h+var_4], 2
0x9F557D: jz      short loc_9F5592
0x9F557F: push    offset aWheel
0x9F5584: push    offset aSmousemiddlebu
0x9F5589: mov     ecx, eax; self
0x9F558B: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F5590: jmp     short loc_9F5594
0x9F5592: xor     eax, eax
0x9F5594: push    8; Size
0x9F5596: mov     [esp+1Ch+var_4], esi
0x9F559A: mov     dword ptr unk_B3955C, eax
0x9F559F: call    FormHeapAlloc
0x9F55A4: add     esp, 4
0x9F55A7: mov     [esp+18h+var_10], eax
0x9F55AB: test    eax, eax
0x9F55AD: mov     [esp+18h+var_4], 3
0x9F55B5: jz      short loc_9F55CA
0x9F55B7: push    offset aButton3
0x9F55BC: push    offset aSmousebutton3
0x9F55C1: mov     ecx, eax; self
0x9F55C3: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F55C8: jmp     short loc_9F55CC
0x9F55CA: xor     eax, eax
0x9F55CC: push    8; Size
0x9F55CE: mov     [esp+1Ch+var_4], esi
0x9F55D2: mov     dword ptr unk_B39560, eax
0x9F55D7: call    FormHeapAlloc
0x9F55DC: add     esp, 4
0x9F55DF: mov     [esp+18h+var_10], eax
0x9F55E3: test    eax, eax
0x9F55E5: mov     [esp+18h+var_4], 4
0x9F55ED: jz      short loc_9F5602
0x9F55EF: push    offset aButton4
0x9F55F4: push    offset aSmousebutton4
0x9F55F9: mov     ecx, eax; self
0x9F55FB: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F5600: jmp     short loc_9F5604
0x9F5602: xor     eax, eax
0x9F5604: push    8; Size
0x9F5606: mov     [esp+1Ch+var_4], esi
0x9F560A: mov     dword ptr unk_B39564, eax
0x9F560F: call    FormHeapAlloc
0x9F5614: add     esp, 4
0x9F5617: mov     [esp+18h+var_10], eax
0x9F561B: test    eax, eax
0x9F561D: mov     [esp+18h+var_4], 5
0x9F5625: jz      short loc_9F563A
0x9F5627: push    offset aButton5
0x9F562C: push    offset aSmousebutton5
0x9F5631: mov     ecx, eax; self
0x9F5633: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F5638: jmp     short loc_9F563C
0x9F563A: xor     eax, eax
0x9F563C: push    8; Size
0x9F563E: mov     [esp+1Ch+var_4], esi
0x9F5642: mov     dword ptr unk_B39568, eax
0x9F5647: call    FormHeapAlloc
0x9F564C: add     esp, 4
0x9F564F: mov     [esp+18h+var_10], eax
0x9F5653: test    eax, eax
0x9F5655: mov     [esp+18h+var_4], 6
0x9F565D: jz      short loc_9F5672
0x9F565F: push    offset aButton6
0x9F5664: push    offset aSmousebutton6
0x9F5669: mov     ecx, eax; self
0x9F566B: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F5670: jmp     short loc_9F5674
0x9F5672: xor     eax, eax
0x9F5674: push    8; Size
0x9F5676: mov     [esp+1Ch+var_4], esi
0x9F567A: mov     dword ptr unk_B3956C, eax
0x9F567F: call    FormHeapAlloc
0x9F5684: add     esp, 4
0x9F5687: mov     [esp+18h+var_10], eax
0x9F568B: test    eax, eax
0x9F568D: mov     [esp+18h+var_4], 7
0x9F5695: jz      short loc_9F56AA
0x9F5697: push    offset aButton7
0x9F569C: push    offset aSmousebutton7
0x9F56A1: mov     ecx, eax; self
0x9F56A3: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F56A8: jmp     short loc_9F56AC
0x9F56AA: xor     eax, eax
0x9F56AC: push    8; Size
0x9F56AE: mov     [esp+1Ch+var_4], esi
0x9F56B2: mov     dword ptr unk_B39570, eax
0x9F56B7: call    FormHeapAlloc
0x9F56BC: add     esp, 4
0x9F56BF: mov     [esp+18h+var_10], eax
0x9F56C3: test    eax, eax
0x9F56C5: mov     [esp+18h+var_4], 8
0x9F56CD: jz      short loc_9F56E2
0x9F56CF: push    offset aButton8
0x9F56D4: push    offset aSmousebutton8
0x9F56D9: mov     ecx, eax; self
0x9F56DB: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F56E0: jmp     short loc_9F56E4
0x9F56E2: xor     eax, eax
0x9F56E4: mov     dword ptr unk_B39574, eax
0x9F56E9: mov     ecx, [esp+18h+var_C]
0x9F56ED: mov     large fs:0, ecx
0x9F56F4: pop     ecx
0x9F56F5: pop     esi
0x9F56F6: add     esp, 10h
0x9F56F9: retn
0x9BB040: mov     eax, [ebp-10h]; Microsoft VisualC 2-14/net runtime
0x9BB043: push    eax
0x9BB044: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB049: pop     ecx
0x9BB04A: retn
0x9BB04B: mov     eax, [ebp-10h]
0x9BB04E: push    eax
0x9BB04F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB054: pop     ecx
0x9BB055: retn
0x9BB056: mov     eax, [ebp-10h]
0x9BB059: push    eax
0x9BB05A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB05F: pop     ecx
0x9BB060: retn
0x9BB061: mov     eax, [ebp-10h]
0x9BB064: push    eax
0x9BB065: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB06A: pop     ecx
0x9BB06B: retn
0x9BB06C: mov     eax, [ebp-10h]
0x9BB06F: push    eax
0x9BB070: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB075: pop     ecx
0x9BB076: retn
0x9BB077: mov     eax, [ebp-10h]
0x9BB07A: push    eax
0x9BB07B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB080: pop     ecx
0x9BB081: retn
0x9BB082: mov     eax, [ebp-10h]
0x9BB085: push    eax
0x9BB086: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB08B: pop     ecx
0x9BB08C: retn
0x9BB08D: mov     eax, [ebp-10h]
0x9BB090: push    eax
0x9BB091: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB096: pop     ecx
0x9BB097: retn
0x9BB098: mov     eax, [ebp-10h]
0x9BB09B: push    eax
0x9BB09C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB0A1: pop     ecx
0x9BB0A2: retn
0x9BB0A3: mov     edx, [esp+arg_4]
0x9BB0A7: lea     eax, [edx-8]
0x9BB0AA: mov     ecx, [edx-0Ch]
0x9BB0AD: xor     ecx, eax
0x9BB0AF: call    @__security_check_cookie@4
0x9BB0B4: mov     eax, offset stru_AE4F50
0x9BB0B9: jmp     ___CxxFrameHandler3
