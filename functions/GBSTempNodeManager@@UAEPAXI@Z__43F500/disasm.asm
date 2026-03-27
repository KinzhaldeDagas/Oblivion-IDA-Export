0x43F500: push    esi
0x43F501: mov     esi, ecx
0x43F503: call    ??1BSTempNodeManager@@UAE@XZ; BSTempNodeManager::~BSTempNodeManager(void)
0x43F508: test    byte ptr [esp+4+arg_0], 1
0x43F50D: jz      short loc_43F518
0x43F50F: push    esi
0x43F510: call    FormHeapFree
0x43F515: add     esp, 4
0x43F518: mov     eax, esi
0x43F51A: pop     esi
0x43F51B: retn    4
