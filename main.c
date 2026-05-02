#include <stdio.h>
#include <string.h>

int main()
{
    const char *keywords[]={
        "屏幕共享","百万保障","安全账户","修复征信","刷单做任务","色情小卡片","未知链接,二维码","境外来电","小众聊天软件",
        "内幕消息","NFC盗刷","积分清零","快递引流","虚拟货币","电诈工具人","帮信行为","两卡","现金黄金","购物卡","刷流水"
    };
    int count=20;
    char input[1000];
    printf("请输入需要检测的文字：\n");
    fgets(input,sizeof(input),stdin);
    int score=0;
    int i;
    printf("检测到以下关键词：\n");
    for (i=0;i<count;i++){
        if(strstr(input,keywords[i]) !=NULL){
            printf("%s\n",keywords[i]);
            score++;
        }
    }
    printf("score is %d\n",score*10);
    if (score==0){
        printf("风险较小\n");
    }
    else if (score==1){
        printf("高度警惕\n");
    }
    else if (score<=3){
        printf("极高风险\n");
    }
    else {
        printf("几乎确定是诈骗\n");
    }
    return 0;

}
