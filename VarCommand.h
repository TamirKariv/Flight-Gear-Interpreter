//Class of Var Command  - give the var the value from the expression


#ifndef UNTITLED16_VARCOMMAND_H
#define UNTITLED16_VARCOMMAND_H


#include "Command.h"
#include <string>
#include <vector>

/**
 * Var Command
 */
class VarCommand: public Command {
private:
    map<string,double > symbolTable;
public:
    /**
     * Execute.
     * @param args args
     */
    void Execute(vector<string> args) override;

    /**
     * Get Symbol Map.
     * @return map<string, double>
     */
    map<string, double> GetSymbolMap() override;

    /**
     * set Symbol Map.
     * @param symbolMap symbolMap
     */
    void setSymbolMap(map<string, double> symbolMap) override;
};

#endif //UNTITLED16_VARCOMMAND_H