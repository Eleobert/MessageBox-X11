
#include <wchar.h>
#include <stdlib.h>
#include "messagebox.h"

int main(){
    Button buttons[3];
    //language
    wchar_t lang_bt_eng[] = L"English";
    wchar_t lang_bt_rus[] = L"Русский";
    wchar_t lang_bt_arb[] = L"عربى";

    buttons[0].label = lang_bt_eng;
    buttons[1].label = lang_bt_rus;
    buttons[2].label = lang_bt_arb;

    buttons[0].result = 1;
    buttons[1].result = 2;
    buttons[2].result = 3;

    int res;

     res = Messagebox("Language - Язык  - لغة",
                         L"Please choose a language.\nПожалуйста, выберите язык.\nمن فضلك ، اختر لغة.", buttons, 3);

    Button yn_bts;

    if(res == 1){
        buttons[0].label = L"No";
        buttons[1].label = L"Yes";
        res = Messagebox("Answer this question",
                         L"Do you like to program in C language?", buttons, 2);
        if(res == 1){
            buttons[0].label = L"Accept";
            res = Messagebox("Oops",
                             L"Unfortunately, you are a bad person.\nThere is nothing I can do for you.", buttons, 1);
        }
    }
    else if(res == 2){
        buttons[0].label = L"Нет";
        buttons[1].label = L"Да";
        res = Messagebox("Ответьте на этот вопрос",
                         L"Вы любите программировать на языке C?", buttons, 2);
        if(res == 1){
            buttons[0].label = L"Принимать";
            res = Messagebox("Oops",
                             L"К сожалению, вы плохой человек.\nНичего не могу для вас сделать.", buttons, 1);
        }
    }
    else if(res == 3){
        buttons[0].label = L"لا";
        buttons[1].label = L"نعم";
        res = Messagebox("أجب على هذا السؤال",
                         L"هل تحب البرمجة بلغة C؟", buttons, 2);
        if(res == 1){
            buttons[0].label = L"قبول";
            res = Messagebox("Oops",
                             L"لسوء الحظ ، أنت شخص سيئ.\n"
                                     "لا يوجد شيء يمكنني القيام به من أجلك.", buttons, 1);
        }
    }





}
